#include "string.h"
#include "math.h"
#include "stdio.h"
#include "game.h"
#include <tamtypes.h>
  
/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# (c) 2005 Naomi Peori <naomi@peori.ca>
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
*/

u128 internal_vectorReflect(u128 input, u128 normal);
void internal_vector_pack(u128 input, u32* dst);
u128 internal_vector_unpack(u32* src);
void internal_matrix_toeuler_inGame(MATRIX m, VECTOR out);
void internal_matrix_toeuler_inLobby(MATRIX m, VECTOR out);

//--------------------------------------------------------
void vector_write(VECTOR output, u128 input0)
{
    *(u128*)output = input0;
}

//--------------------------------------------------------
u128 vector_read(VECTOR input0)
{
    return *(u128*)input0;
}

//--------------------------------------------------------
void vector_reflect(VECTOR output, VECTOR input0, VECTOR normal)
{
    vector_write(output, internal_vectorReflect(vector_read(input0), vector_read(normal)));
}

//--------------------------------------------------------
void vector_fromyaw(VECTOR out, float radians)
{
  out[0] = cosf(radians),
  out[1] = sinf(radians),
  out[2] = 0;
  out[3] = 0;
}

//--------------------------------------------------------
void vector_clampeuler(VECTOR output, VECTOR input0)
{
  output[0] = clampAngle(input0[0]);
  output[1] = clampAngle(input0[1]);
  output[2] = clampAngle(input0[2]);
}

//--------------------------------------------------------
void vector_apply(VECTOR output, VECTOR input0, MATRIX input1)
{
    asm __volatile__ (
    // Load the matrix rows and input vector before writing any output.
    "lqc2            vf1,    0x00(%2)                \n"
    "lqc2            vf2,    0x10(%2)                \n"
    "lqc2            vf3,    0x20(%2)                \n"
    "lqc2            vf4,    0x30(%2)                \n"
    "lqc2            vf5,    0x00(%1)                \n"

    // Seed ACC with the translation row, then accumulate the input XYZ terms.
    "vmulaw          ACC,    vf4,    vf0             \n"
    "vmaddax         ACC,    vf1,    vf5             \n"
    "vmadday         ACC,    vf2,    vf5             \n"
    "vmaddz          vf6,    vf3,    vf5             \n"
    "sqc2            vf6,    0x00(%0)                \n"
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------
void vector_copy(VECTOR output, VECTOR input0)
{
    asm __volatile__ (
    "lqc2            vf1,    0x00(%1)                \n"
    "sqc2            vf1,    0x00(%0)                \n"
    : : "r" (output), "r" (input0)
    : "memory"
    );
}

//--------------------------------------------------------
void vector_normalize(VECTOR output, VECTOR input0)
{
    asm __volatile__ (
    "lqc2            vf1,    0x00(%1)                \n"

    // Square XYZ, then reduce their sum into vf2.w; W is excluded.
    "vmul.xyz        vf2,    vf1,    vf1             \n"
    "vmulax.w        ACC,    vf0,    vf2             \n"
    "vmadday.w       ACC,    vf0,    vf2             \n"
    "vmaddz.w        vf2,    vf0,    vf2             \n"

    // Start Q = 1/sqrt(lengthSquared), clearing output W while Q is pending.
    "vrsqrt          Q,      vf0w,   vf2w            \n"
    "vsub.w          vf1,    vf0,    vf0             \n"

    // Wait before reading Q, then scale XYZ by the reciprocal length.
    "vwaitq                                          \n"
    "vmulq.xyz       vf1,    vf1,    Q               \n"
    "sqc2            vf1,    0x00(%0)                \n"
    : : "r" (output), "r" (input0)
    : "memory"
    );
}

//--------------------------------------------------------
float vector_sqrmag(VECTOR input0)
{
    float result;
    int bits;

    __asm__ __volatile__ (
    "lqc2            vf1,    0x00(%2)                \n"

    // Broadcast ones for the horizontal sum of the squared XYZ components.
    "vmaxw.xyzw      vf3,    vf0,    vf0w            \n"

    // Reduce x*x + y*y + z*z into vf1.x; ignore the input W.
    "vmul.xyz        vf1,    vf1,    vf1             \n"
    "vadday.x        ACC,    vf1,    vf1y            \n"
    "vmaddz.x        vf1,    vf3,    vf1z            \n"

    // Return the scalar through a GPR into COP1 without a stack buffer.
    "qmfc2           %1,     vf1                     \n"
    "mtc1            %1,     %0                      \n"
    : "=f" (result), "=&r" (bits) : "r" (input0) : "memory"
    );
    return result;
}

//--------------------------------------------------------
float vector_length(VECTOR input0)
{
    float result;
    int bits;

    __asm__ __volatile__ (
    "lqc2            vf1,    0x00(%2)                \n"

    // Broadcast ones for the horizontal sum of the squared XYZ components.
    "vmaxw.xyzw      vf3,    vf0,    vf0w            \n"

    // Reduce x*x + y*y + z*z into vf1.x; ignore the input W.
    "vmul.xyz        vf1,    vf1,    vf1             \n"
    "vadday.x        ACC,    vf1,    vf1y            \n"
    "vmaddz.x        vf1,    vf3,    vf1z            \n"

    // Move lengthSquared from VU0 to COP1 through a GPR.
    "qmfc2           %1,     vf1                     \n"
    "mtc1            %1,     %0                      \n"

    // Take the scalar square root directly in COP1.
    "sqrt.s          %0,     %0                      \n"
    : "=f" (result), "=&r" (bits) : "r" (input0) : "memory"
    );
    return result;
}

//--------------------------------------------------------
float vector_distance(VECTOR input0, VECTOR input1)
{
    float result;
    int bits;

    __asm__ __volatile__ (
    // Form the XYZ difference entirely in registers.
    "lqc2            vf1,    0x00(%2)                \n"
    "lqc2            vf2,    0x00(%3)                \n"
    "vsub.xyz        vf1,    vf1,    vf2             \n"

    // Square the difference and reduce XYZ into the squared distance.
    "vmaxw.xyzw      vf3,    vf0,    vf0w            \n"
    "vmul.xyz        vf1,    vf1,    vf1             \n"
    "vadday.x        ACC,    vf1,    vf1y            \n"
    "vmaddz.x        vf1,    vf3,    vf1z            \n"

    // Transfer the scalar to COP1 without storing an intermediate vector.
    "qmfc2           %1,     vf1                     \n"
    "mtc1            %1,     %0                      \n"

    // Take the square root to obtain distance.
    "sqrt.s          %0,     %0                      \n"
    : "=f" (result), "=&r" (bits) : "r" (input0), "r" (input1) : "memory"
    );
    return result;
}

//--------------------------------------------------------
float vector_sqrdistance(VECTOR input0, VECTOR input1)
{
    float result;
    int bits;

    __asm__ __volatile__ (
    // Form the XYZ difference entirely in registers.
    "lqc2            vf1,    0x00(%2)                \n"
    "lqc2            vf2,    0x00(%3)                \n"
    "vsub.xyz        vf1,    vf1,    vf2             \n"

    // Square the difference and reduce XYZ into the squared distance.
    "vmaxw.xyzw      vf3,    vf0,    vf0w            \n"
    "vmul.xyz        vf1,    vf1,    vf1             \n"
    "vadday.x        ACC,    vf1,    vf1y            \n"
    "vmaddz.x        vf1,    vf3,    vf1z            \n"

    // Transfer the scalar to COP1 without storing an intermediate vector.
    "qmfc2           %1,     vf1                     \n"
    "mtc1            %1,     %0                      \n"
    : "=f" (result), "=&r" (bits) : "r" (input0), "r" (input1) : "memory"
    );
    return result;
}

//--------------------------------------------------------
float vector_innerproduct(VECTOR input0, VECTOR input1)
{
    float result;
    int bits;
    unsigned int magnitude0, magnitude1;

    __asm__ __volatile__ (
    // Load both vectors; vf5 supplies ones for the horizontal sums.
    "lqc2            vf1,    0x00(%4)                \n"
    "lqc2            vf2,    0x00(%5)                \n"
    "vmaxw.xyzw      vf5,    vf0,    vf0w            \n"

    // Square each input component before reducing the two XYZ lengths.
    "vmul.xyz        vf3,    vf1,    vf1             \n"
    "vmul.xyz        vf4,    vf2,    vf2             \n"

    // Reduce the first squared length and start its reciprocal square root.
    "vadday.x        ACC,    vf3,    vf3y            \n"
    "vmaddz.x        vf3,    vf5,    vf3z            \n"
    "vrsqrt          Q,      vf0w,   vf3x            \n"

    // Reduce the second squared length while the first reciprocal root is pending.
    "vadday.x        ACC,    vf4,    vf4y            \n"
    "vmaddz.x        vf4,    vf5,    vf4z            \n"

    // Keep both squared-length bit patterns for the zero-length fallback in C.
    "qmfc2           %2,     vf3                     \n"
    "qmfc2           %3,     vf4                     \n"

    // Normalize input0 once Q is ready, then reuse Q to normalize input1.
    "vwaitq                                          \n"
    "vmulq.xyz       vf1,    vf1,    Q               \n"
    "vrsqrt          Q,      vf0w,   vf4x            \n"
    "vwaitq                                          \n"
    "vmulq.xyz       vf2,    vf2,    Q               \n"

    // Compute the XYZ dot product of the normalized vectors; W is excluded.
    "vmul.xyz        vf1,    vf1,    vf2             \n"
    "vadday.x        ACC,    vf1,    vf1y            \n"
    "vmaddz.x        vf1,    vf5,    vf1z            \n"

    // Transfer the dot product to COP1 for clamping in C.
    "qmfc2           %1,     vf1                     \n"
    "mtc1            %1,     %0                      \n"
    : "=f" (result), "=&r" (bits), "=&r" (magnitude0), "=&r" (magnitude1)
    : "r" (input0), "r" (input1) : "memory"
    );

    if ((magnitude0 & 0x7fffffffU) == 0 || (magnitude1 & 0x7fffffffU) == 0) {
        // Preserve the existing EE divide-by-zero behavior for zero lengths.
        float m0, m1;
        __asm__(
        // Restore both squared lengths as COP1 floats for the original division path.
        "mtc1            %2,     %0                      \n\t"
        "mtc1            %3,     %1                      \n\t"

        // Compute the scalar lengths used by the zero-length fallback.
        "sqrt.s          %0,     %0                      \n\t"
        "sqrt.s          %1,     %1                      "
        : "=&f" (m0), "=&f" (m1) : "r" (magnitude0), "r" (magnitude1)
        );
        result = (input0[0] / m0) * (input1[0] / m1)
               + (input0[1] / m0) * (input1[1] / m1)
               + (input0[2] / m0) * (input1[2] / m1);
    }

    if (result < -1.0f) return -1.0f;
    if (result > 1.0f) return 1.0f;
    return result;
}

//--------------------------------------------------------
float vector_innerproduct_unscaled(VECTOR input0, VECTOR input1)
{
    // Return the inner product.
    return  (input0[0] * input1[0]) + (input0[1] * input1[1]) + (input0[2] * input1[2]);
}

//--------------------------------------------------------
void vector_outerproduct(VECTOR output, VECTOR input0, VECTOR input1)
{
    asm __volatile__ (
    "lqc2            vf1,    0x00(%1)                \n"
    "lqc2            vf2,    0x00(%2)                \n"

    // Cross product: accumulate forward cyclic products, then subtract reverse products.
    "vopmula.xyz     ACC,    vf1,    vf2             \n"
    "vopmsub.xyz     vf2,    vf2,    vf1             \n"

    // Clear W so the result is a 3D direction.
    "vsub.w          vf2,    vf0,    vf0             \n"
    "sqc2            vf2,    0x00(%0)                \n"
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------
void vector_lerp(VECTOR output, VECTOR input0, VECTOR input1, float t)
{
    int bits;

    __asm__ __volatile__ (
    // Transfer t from COP1 to vf3.x without staging it on the stack.
    "mfc1            %0,     %4                      \n"
    "qmtc2           %0,     vf3                     \n"
    "lqc2            vf1,    0x00(%2)                \n"
    "lqc2            vf2,    0x00(%3)                \n"

    // Compute (input1 - input0)*t + input0 in XYZ; preserve input0.W.
    "vsub.xyz        vf2,    vf2,    vf1             \n"
    "vmulx.xyz       vf2,    vf2,    vf3x            \n"
    "vadd.xyz        vf1,    vf2,    vf1             \n"
    "sqc2            vf1,    0x00(%1)                \n"
    : "=&r" (bits)
    : "r" (output), "r" (input0), "r" (input1), "f" (t) : "memory"
    );
}


//--------------------------------------------------------
void vector_subtract(VECTOR output, VECTOR input0, VECTOR input1)
{
    asm __volatile__ (
    "lqc2            vf1,    0x00(%1)                \n"
    "lqc2            vf2,    0x00(%2)                \n"

    // Subtract XYZ while retaining input0.W in the destination register.
    "vsub.xyz        vf1,    vf1,    vf2             \n"
    "sqc2            vf1,    0x00(%0)                \n"
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------
void vector_add(VECTOR output, VECTOR input0, VECTOR input1)
{
    asm __volatile__ (
    "lqc2            vf1,    0x00(%1)                \n"
    "lqc2            vf2,    0x00(%2)                \n"

    // Add XYZ while retaining input0.W in the destination register.
    "vadd.xyz        vf1,    vf2,    vf1             \n"
    "sqc2            vf1,    0x00(%0)                \n"
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------
// void vector_negate(VECTOR output, VECTOR input0);

//--------------------------------------------------------
void vector_scale(VECTOR output, VECTOR input0, float scalar)
{
    int bits;

    __asm__ __volatile__ (
    // Transfer the scalar to vf2.x through a GPR; only that lane is used.
    "mfc1            %0,     %3                      \n"
    "qmtc2           %0,     vf2                     \n"
    "lqc2            vf1,    0x00(%2)                \n"

    // Scale XYZ while preserving the loaded input W.
    "vmulx.xyz       vf1,    vf1,    vf2x            \n"
    "sqc2            vf1,    0x00(%1)                \n"
    : "=&r" (bits) : "r" (output), "r" (input0), "f" (scalar) : "memory"
    );
}

//--------------------------------------------------------
void vector_multiply(VECTOR output, VECTOR input0, VECTOR input1)
{
    asm __volatile__ (
    "lqc2            vf1,    0x00(%1)                \n"
    "lqc2            vf2,    0x00(%2)                \n"
    "vmul.xyzw       vf1,    vf1,    vf2             \n"
    "sqc2            vf1,    0x00(%0)                \n"
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------------------------
void vector_projectonvertical(VECTOR output, VECTOR input0)
{
    asm __volatile__ (
    "lqc2            vf1,    0x00(%1)                \n"

    // Clear the horizontal X/Y components while preserving Z and W.
    "vmove.xy        vf1,    vf0                     \n"
    "sqc2            vf1,    0x00(%0)                \n"
    : : "r" (output), "r" (input0)
    : "memory"
    );
}

//--------------------------------------------------------------------------
void vector_projectonhorizontal(VECTOR output, VECTOR input0)
{
    asm __volatile__ (
    "lqc2            vf1,    0x00(%1)                \n"

    // Clear the vertical Z component while preserving X, Y, and W.
    "vmove.z         vf1,    vf0                     \n"
    "sqc2            vf1,    0x00(%0)                \n"
    : : "r" (output), "r" (input0)
    : "memory"
    );
}

//--------------------------------------------------------
void vector_project(VECTOR output, VECTOR input0, VECTOR input1)
{
  asm __volatile__ (
  "vmaxw.xyzw      vf3,    vf0,    vf0w            \n"
  "lqc2            vf1,    0x00(%1)                \n"
  "lqc2            vf2,    0x00(%2)                \n"

  // Reduce the XYZ dot product of the input and projection axis.
  "vmul.xyz        vf1,    vf1,    vf2             \n"
  "vadday.x        ACC,    vf1,    vf1y            \n"
  "vmaddz.x        vf1,    vf3,    vf1z            \n"

  // Scale the axis by the dot product; this projection assumes a unit axis.
  "vmulx.xyz       vf2,    vf2,    vf1x            \n"
  "sqc2            vf2,    0x00(%0)                \n"
  : : "r" (output), "r" (input0), "r" (input1)
  : "memory"
  );
}

//--------------------------------------------------------
void vector_projectonplane(VECTOR output, VECTOR input0, VECTOR input1)
{
  asm __volatile__ (
  "vmaxw.xyzw      vf3,    vf0,    vf0w            \n"
  "lqc2            vf4,    0x00(%1)                \n"
  "lqc2            vf2,    0x00(%2)                \n"

  // Reduce the XYZ dot product of the input and plane normal.
  "vmul.xyz        vf1,    vf4,    vf2             \n"
  "vadday.x        ACC,    vf1,    vf1y            \n"
  "vmaddz.x        vf1,    vf3,    vf1z            \n"

  // Scale the unit normal by the dot, then subtract it from the original XYZ.
  "vmulx.xyz       vf2,    vf2,    vf1x            \n"
  "vsub.xyz        vf2,    vf4,    vf2             \n"
  "sqc2            vf2,    0x00(%0)                \n"
  : : "r" (output), "r" (input0), "r" (input1)
  : "memory"
  );
}

//--------------------------------------------------------
void vector_print(VECTOR input0)
{
  printf("(%f, %f, %f, %f)",
    input0[0],
    input0[1],
    input0[2],
    input0[3]);
}

//--------------------------------------------------------
void vector_pack(VECTOR input0, u32* dst)
{
  internal_vector_pack(vector_read(input0), dst);
}

//--------------------------------------------------------
void vector_unpack(VECTOR dst, u32 vector)
{
  vector_write(dst, internal_vector_unpack(&vector));
}

//--------------------------------------------------------
void vector_fromforwardup(VECTOR output, VECTOR forward, VECTOR up)
{
  MATRIX m;
  matrix_unit(m);
  vector_copy(&m[0], forward);
  vector_copy(&m[8], up);
  vector_outerproduct(&m[4], &m[8], forward);
  matrix_toeuler(m, output);
}

//--------------------------------------------------------
void quat_normalize(VECTOR output, VECTOR input0)
{
	asm __volatile__(
    "lqc2            vf1,    0x00(%1)                \n"

    // Reduce all four squared components into vf2.w, including quaternion W.
    "vmul.xyzw       vf2,    vf1,    vf1             \n"
    "vmulax.w        ACC,    vf0,    vf2             \n"
    "vmadday.w       ACC,    vf0,    vf2             \n"
    "vmaddaz.w       ACC,    vf0,    vf2             \n"
    "vmaddw.w        vf2,    vf0,    vf2             \n"

    // Start the reciprocal length and wait before consuming Q.
    "vrsqrt          Q,      vf0w,   vf2w            \n"
    "vwaitq                                          \n"

    // Normalize all four quaternion components with the same scale.
    "vmulq.xyzw      vf1,    vf1,    Q               \n"
    "sqc2            vf1,    0x00(%0)                \n"
			: : "r"(output), "r"(input0)
    : "memory"
    );
}

//--------------------------------------------------------
void quat_fromangleaxis(VECTOR output, VECTOR axis, float theta)
{
  float sinTheta = sinf(theta / 2);
  float cosTheta = cosf(theta / 2);
  VECTOR trig = {sinTheta, sinTheta, sinTheta, cosTheta};

  asm __volatile__ (
  // Load the axis and the sine/cosine of half the rotation angle.
  "lqc2            vf1,    0x00(%1)                \n"
  "lqc2            vf2,    0x00(%2)                \n"

  // Scale XYZ by sine and replace W with cosine.
  "vmul.xyz        vf1,    vf1,    vf2             \n"
  "vmove.w         vf1,    vf2                     \n"
  "sqc2            vf1,    0x00(%0)                \n"
      :
      : "r"(output), "r"(axis), "r"(trig)
      : "memory"
  );
}

//--------------------------------------------------------
void quat_from_matrix(VECTOR output, const MATRIX input0)
{
    float m00 = input0[0], m11 = input0[5], m22 = input0[10];
    float trace = m00 + m11 + m22;
    float x, y, z, w;
    int xy, zw, bits;

    // The common 1/(2*sqrt(t)) factor cancels in the final normalization.
    // Keep the original branch conditions and off-diagonal sign convention.
    if (trace > 0.0f) {
        x = input0[9] - input0[6];
        y = input0[2] - input0[8];
        z = input0[1] - input0[4];
        w = trace + 1.0f;
    } else if (m00 > m11 && m00 > m22) {
        x = 1.0f + m00 - m11 - m22;
        y = input0[1] + input0[4];
        z = input0[2] + input0[8];
        w = input0[6] - input0[9];
    } else if (m11 > m22) {
        x = input0[1] + input0[4];
        y = 1.0f + m11 - m00 - m22;
        z = input0[6] + input0[9];
        w = input0[8] - input0[2];
    } else {
        x = input0[2] + input0[8];
        y = input0[6] + input0[9];
        z = 1.0f + m22 - m00 - m11;
        w = input0[1] - input0[4];
    }

    __asm__ __volatile__ (
    // Pack the scalar x/y and z/w bit patterns into one 128-bit GPR.
    "mfc1            %0,     %4                      \n"
    "mfc1            %1,     %5                      \n"
    "pextlw          %0,     %1,     %0              \n"
    "mfc1            %1,     %6                      \n"
    "mfc1            %2,     %7                      \n"
    "pextlw          %1,     %2,     %1              \n"
    "pcpyld          %0,     %1,     %0              \n"

    // Transfer the raw quaternion to VU0 and reduce its four-component squared length.
    "qmtc2           %0,     vf1                     \n"
    "vmul.xyzw       vf2,    vf1,    vf1             \n"
    "vmulax.w        ACC,    vf0,    vf2             \n"
    "vmadday.w       ACC,    vf0,    vf2             \n"
    "vmaddaz.w       ACC,    vf0,    vf2             \n"
    "vmaddw.w        vf2,    vf0,    vf2             \n"

    // Start the reciprocal length, wait for Q, and normalize XYZW once.
    "vrsqrt          Q,      vf0w,   vf2w            \n"
    "vwaitq                                          \n"
    "vmulq.xyzw      vf1,    vf1,    Q               \n"
    "sqc2            vf1,    0x00(%3)                \n"
    : "=&r" (xy), "=&r" (zw), "=&r" (bits)
    : "r" (output), "f" (x), "f" (y), "f" (z), "f" (w) : "memory"
    );
}

//--------------------------------------------------------
void matrix_copy(MATRIX output, MATRIX input0)
{
  asm __volatile__ (
  // Load all four rows before storing, allowing input and output to overlap.
  "lqc2            vf1,    0x00(%1)                \n"
  "lqc2            vf2,    0x10(%1)                \n"
  "lqc2            vf3,    0x20(%1)                \n"
  "lqc2            vf4,    0x30(%1)                \n"
  "sqc2            vf1,    0x00(%0)                \n"
  "sqc2            vf2,    0x10(%0)                \n"
  "sqc2            vf3,    0x20(%0)                \n"
  "sqc2            vf4,    0x30(%0)                \n"
   : : "r" (output), "r" (input0)
   : "memory"
  );
}

//--------------------------------------------------------
void matrix_toeuler(MATRIX input0, VECTOR output)
{
  if (isInGame()) internal_matrix_toeuler_inGame(input0, output);
  else if (isInMenus()) internal_matrix_toeuler_inLobby(input0, output);
}

//--------------------------------------------------------
void matrix_fromrows(MATRIX output, VECTOR input0, VECTOR input1, VECTOR input2, VECTOR input3)
{
    // Read every row before writing so the output may overlap the inputs.
    __asm__ __volatile__ (
    // Read every source row first, including rows that overlap the destination.
    "lqc2            vf1,    0x00(%1)                \n"
    "lqc2            vf2,    0x00(%2)                \n"
    "lqc2            vf3,    0x00(%3)                \n"
    "lqc2            vf4,    0x00(%4)                \n"

    // Store the four loaded rows in destination order.
    "sqc2            vf1,    0x00(%0)                \n"
    "sqc2            vf2,    0x10(%0)                \n"
    "sqc2            vf3,    0x20(%0)                \n"
    "sqc2            vf4,    0x30(%0)                \n"
    : : "r" (output), "r" (input0), "r" (input1), "r" (input2), "r" (input3)
    : "memory"
    );
}

//--------------------------------------------------------
void matrix_from_up_normal_twist(MATRIX output, VECTOR normal, float theta)
{
	VECTOR n;
	VECTOR r, u;
	VECTOR helper = {0, 1, 0, 0};
	VECTOR helper2 = {0, 0, 1, 0};

	// normalize axis
	vector_normalize(n, normal);

	// If n is close to +Y/-Y, use Z as helper; else use Y.
	vector_outerproduct(r, helper, n);
	if (vector_sqrmag(r) < 0.00001)
		vector_outerproduct(r, helper2, n);

	// Right-handed basis:
	// r = cross(helper, n)
	// u = cross(n, r)
	vector_normalize(r, r);
	vector_outerproduct(u, n, r);

	// Apply twist around n by theta: rotate (r,u) in their plane
	float c = cosf(theta);
	float s = sinf(theta);
    int trig, bits;

    // Preserve both tested sums: r' = r*c + u*s; u' = u*c + r*s.
    __asm__ __volatile__ (
    // Pack cos(theta) and sin(theta) into vf4.x and vf4.y.
    "mfc1            %0,     %6                      \n"
    "mfc1            %1,     %7                      \n"
    "pextlw          %0,     %1,     %0              \n"
    "qmtc2           %0,     vf4                     \n"

    // Load the right, up, and normal vectors before writing the matrix.
    "lqc2            vf1,    0x00(%3)                \n"
    "lqc2            vf2,    0x00(%4)                \n"
    "lqc2            vf3,    0x00(%5)                \n"

    // r' = r*c + u*s; keep separate multiplies to preserve the existing rounding.
    "vmulx.xyz       vf5,    vf1,    vf4x            \n"
    "vmuly.xyz       vf6,    vf2,    vf4y            \n"
    "vadd.xyz        vf5,    vf6,    vf5             \n"

    // u' = u*c + r*s; retain the tested addition here as well.
    "vmulx.xyz       vf6,    vf2,    vf4x            \n"
    "vmuly.xyz       vf7,    vf1,    vf4y            \n"
    "vadd.xyz        vf6,    vf7,    vf6             \n"

    // Clear both output W lanes and the complete final matrix row.
    "vsub.w          vf5,    vf0,    vf0             \n"
    "vsub.w          vf6,    vf0,    vf0             \n"
    "vsub.xyzw       vf7,    vf0,    vf0             \n"

    // Store r', u', n, and the zero row in matrix row order.
    "sqc2            vf5,    0x00(%2)                \n"
    "sqc2            vf6,    0x10(%2)                \n"
    "sqc2            vf3,    0x20(%2)                \n"
    "sqc2            vf7,    0x30(%2)                \n"
    : "=&r" (trig), "=&r" (bits)
    : "r" (output), "r" (r), "r" (u), "r" (n), "f" (c), "f" (s) : "memory"
    );
}

//--------------------------------------------------------
void matrix_multiply(MATRIX output, MATRIX input0, MATRIX input1)
{
    asm __volatile__ (
    // Load both matrices completely so either input may alias the output.
    "lqc2            vf1,    0x00(%1)                \n"
    "lqc2            vf2,    0x10(%1)                \n"
    "lqc2            vf3,    0x20(%1)                \n"
    "lqc2            vf4,    0x30(%1)                \n"
    "lqc2            vf5,    0x00(%2)                \n"
    "lqc2            vf6,    0x10(%2)                \n"
    "lqc2            vf7,    0x20(%2)                \n"
    "lqc2            vf8,    0x30(%2)                \n"

    // Form output row 0 as input0[0..3] weighted sums of the input1 rows.
    "vmulax.xyzw     ACC,    vf5,    vf1             \n"
    "vmadday.xyzw    ACC,    vf6,    vf1             \n"
    "vmaddaz.xyzw    ACC,    vf7,    vf1             \n"
    "vmaddw.xyzw     vf1,    vf8,    vf1             \n"

    // Form output row 1 using input0[4..7] and a fresh ACC chain.
    "vmulax.xyzw     ACC,    vf5,    vf2             \n"
    "vmadday.xyzw    ACC,    vf6,    vf2             \n"
    "vmaddaz.xyzw    ACC,    vf7,    vf2             \n"
    "vmaddw.xyzw     vf2,    vf8,    vf2             \n"

    // Form output row 2 using input0[8..11] and a fresh ACC chain.
    "vmulax.xyzw     ACC,    vf5,    vf3             \n"
    "vmadday.xyzw    ACC,    vf6,    vf3             \n"
    "vmaddaz.xyzw    ACC,    vf7,    vf3             \n"
    "vmaddw.xyzw     vf3,    vf8,    vf3             \n"

    // Form output row 3 using input0[12..15] and a fresh ACC chain.
    "vmulax.xyzw     ACC,    vf5,    vf4             \n"
    "vmadday.xyzw    ACC,    vf6,    vf4             \n"
    "vmaddaz.xyzw    ACC,    vf7,    vf4             \n"
    "vmaddw.xyzw     vf4,    vf8,    vf4             \n"

    // Store the completed rows only after all input data has been consumed.
    "sqc2            vf1,    0x00(%0)                \n"
    "sqc2            vf2,    0x10(%0)                \n"
    "sqc2            vf3,    0x20(%0)                \n"
    "sqc2            vf4,    0x30(%0)                \n"
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------
void matrix_scale(MATRIX output, MATRIX input0, VECTOR input1)
{
    // Right-multiplication by diag(sx, sy, sz, 1): preserve every row's W.
    __asm__ __volatile__ (
    // Load scale factors before matrix rows so factors may also alias the output.
    "lqc2            vf5,    0x00(%2)                \n"
    "lqc2            vf1,    0x00(%1)                \n"
    "lqc2            vf2,    0x10(%1)                \n"
    "lqc2            vf3,    0x20(%1)                \n"
    "lqc2            vf4,    0x30(%1)                \n"

    // Multiply XYZ in each row by the scale factors; leave every W unchanged.
    "vmul.xyz        vf1,    vf1,    vf5             \n"
    "vmul.xyz        vf2,    vf2,    vf5             \n"
    "vmul.xyz        vf3,    vf3,    vf5             \n"
    "vmul.xyz        vf4,    vf4,    vf5             \n"
    "sqc2            vf1,    0x00(%0)                \n"
    "sqc2            vf2,    0x10(%0)                \n"
    "sqc2            vf3,    0x20(%0)                \n"
    "sqc2            vf4,    0x30(%0)                \n"
    : : "r" (output), "r" (input0), "r" (input1) : "memory"
    );
}

//--------------------------------------------------------
float matrix_determinant(MATRIX input0)
{
    return
        input0[0] * (input0[5]*input0[10]*input0[15] + input0[6]*input0[11]*input0[13] + input0[7]*input0[9]*input0[14]
                    -input0[7]*input0[10]*input0[13] - input0[6]*input0[9]*input0[15] - input0[5]*input0[11]*input0[14])

    -   input0[4] * (input0[1]*input0[10]*input0[15] + input0[2]*input0[11]*input0[13] + input0[3]*input0[9]*input0[14]
                    -input0[3]*input0[10]*input0[13] - input0[2]*input0[9]*input0[15] - input0[1]*input0[11]*input0[14])

    +   input0[8] * (input0[1]*input0[6]*input0[15] + input0[2]*input0[7]*input0[13] + input0[3]*input0[5]*input0[14]
                    -input0[3]*input0[6]*input0[13] - input0[2]*input0[5]*input0[15] - input0[1]*input0[7]*input0[14])

    -   input0[12] *(input0[1]*input0[6]*input0[11] + input0[2]*input0[7]*input0[9] + input0[3]*input0[5]*input0[10]
                    -input0[3]*input0[6]*input0[9] - input0[2]*input0[5]*input0[11] - input0[1]*input0[7]*input0[10]);
}

//--------------------------------------------------------
void matrix_transpose(MATRIX output, MATRIX input0)
{
    u128 r0, r1, r2, r3, t0, t1;

    // Transpose bits in GPRs; load all rows first to support in-place use.
    __asm__ __volatile__ (
    // Load four complete rows as bits; this also permits in-place transposition.
    "lq              %0,     0x00(%7)                \n\t"
    "lq              %1,     0x10(%7)                \n\t"
    "lq              %2,     0x20(%7)                \n\t"
    "lq              %3,     0x30(%7)                \n\t"

    // Interleave rows 0/1: t0 = (a00,a10,a01,a11), r1 = (a02,a12,a03,a13).
    "pextlw          %4,     %1,     %0              \n\t"
    "pextuw          %1,     %1,     %0              \n\t"

    // Interleave rows 2/3 the same way into t1 and r3.
    "pextlw          %5,     %3,     %2              \n\t"
    "pextuw          %3,     %3,     %2              \n\t"

    // Join low/high 64-bit halves to assemble the four complete columns.
    "pcpyld          %0,     %5,     %4              \n\t"
    "pcpyud          %2,     %4,     %5              \n\t"
    "pcpyld          %4,     %3,     %1              \n\t"
    "pcpyud          %1,     %1,     %3              \n\t"

    // Store each assembled column as an output row.
    "sq              %0,     0x00(%6)                \n\t"
    "sq              %2,     0x10(%6)                \n\t"
    "sq              %4,     0x20(%6)                \n\t"
    "sq              %1,     0x30(%6)                "
    : "=&r" (r0), "=&r" (r1), "=&r" (r2), "=&r" (r3), "=&r" (t0), "=&r" (t1)
    : "r" (output), "r" (input0)
    : "memory"
    );
}
