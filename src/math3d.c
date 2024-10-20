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
#if __GNUC__ > 3
    "lqc2   $vf1, 0x00(%2)  \n"
    "lqc2   $vf2, 0x10(%2)  \n"
    "lqc2   $vf3, 0x20(%2)  \n"
    "lqc2   $vf4, 0x30(%2)  \n"
    "lqc2   $vf5, 0x00(%1)  \n"
    "vmulaw   $ACC, $vf4, $vf0  \n"
    "vmaddax    $ACC, $vf1, $vf5  \n"
    "vmadday    $ACC, $vf2, $vf5  \n"
    "vmaddz   $vf6, $vf3, $vf5  \n"
    "sqc2   $vf6, 0x00(%0)  \n"
#else
    "lqc2    vf1, 0x00(%2)  \n"
    "lqc2    vf2, 0x10(%2)  \n"
    "lqc2    vf3, 0x20(%2)  \n"
    "lqc2    vf4, 0x30(%2)  \n"
    "lqc2    vf5, 0x00(%1)  \n"
    "vmulaw    ACC, vf4, vf0  \n"
    "vmaddax    ACC, vf1, vf5  \n"
    "vmadday    ACC, vf2, vf5  \n"
    "vmaddz    vf6, vf3, vf5  \n"
    "sqc2    vf6, 0x00(%0)  \n"
#endif
    : : "r" (output), "r" (input0), "r" (input1)
    );
}

//--------------------------------------------------------
void vector_copy(VECTOR output, VECTOR input0)
{
    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2   $vf1, 0x00(%1)  \n"
    "sqc2   $vf1, 0x00(%0)  \n"
#else
    "lqc2    vf1, 0x00(%1)  \n"
    "sqc2    vf1, 0x00(%0)  \n"
#endif
    : : "r" (output), "r" (input0)
  );
}

//--------------------------------------------------------
void vector_normalize(VECTOR output, VECTOR input0)
{
    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2   $vf1, 0x00(%1)  \n"
    "vmul.xyz   $vf2, $vf1, $vf1  \n"
    "vmulax.w   $ACC, $vf0, $vf2  \n"
    "vmadday.w    $ACC, $vf0, $vf2  \n"
    "vmaddz.w   $vf2, $vf0, $vf2  \n"
    "vrsqrt   $Q, $vf0w, $vf2w  \n"
    "vsub.w   $vf1, $vf0, $vf0  \n"
    "vwaitq       \n"
    "vmulq.xyz    $vf1, $vf1, $Q  \n"
    "sqc2   $vf1, 0x00(%0)  \n"
#else
    "lqc2    vf1, 0x00(%1)  \n"
    "vmul.xyz    vf2, vf1, vf1  \n"
    "vmulax.w    ACC, vf0, vf2  \n"
    "vmadday.w    ACC, vf0, vf2  \n"
    "vmaddz.w    vf2, vf0, vf2  \n"
    "vrsqrt    Q, vf0w, vf2w  \n"
    "vsub.w    vf1, vf0, vf0  \n"
    "vwaitq        \n"
    "vmulq.xyz    vf1, vf1, Q  \n"
    "sqc2    vf1, 0x00(%0)  \n"
#endif
    : : "r" (output), "r" (input0)
    );
}

//--------------------------------------------------------
float vector_sqrmag(VECTOR input0)
{
    VECTOR t;

    asm __volatile__ (
#if __GNUC__ > 3
    "vmaxw.xyzw     $vf3, $vf0, $vf0w   \n"
    "lqc2        $vf1, 0x00(%1)      \n"
    "vmul.xyzw    $vf1, $vf1, $vf1    \n"
    "vadday.x       $ACC, $vf1, $vf1y   \n"
    "vmaddz.x    $vf1, $vf3, $vf1z   \n"
    "sqc2        $vf1, 0x00(%0)      \n"
#else
    "vmaxw.xyzw     vf3, vf0, vf0w      \n"
    "lqc2        vf1, 0x00(%1)      \n"
    "vmul.xyzw    vf1, vf1, vf1       \n"
    "vadday.x       ACC, vf1, vf1y      \n"
    "vmaddz.x    vf1, vf3, vf1z      \n"
    "sqc2        vf1, 0x00(%0)      \n"
#endif
    : : "r" (t), "r" (input0)
    : "memory"
    );

    return t[0];
}

//--------------------------------------------------------
float vector_length(VECTOR input0)
{
    return sqrtf(vector_sqrmag(input0));
}

//--------------------------------------------------------
float vector_distance(VECTOR input0, VECTOR input1)
{
  VECTOR dt;
  vector_subtract(dt, input0, input0);
  return vector_length(dt);
}

//--------------------------------------------------------
float vector_innerproduct(VECTOR input0, VECTOR input1)
{
    VECTOR work0, work1;

    // Normalize the first vector.
    float m0 = vector_length(input0);
    work0[0] = (input0[0] / m0);
    work0[1] = (input0[1] / m0);
    work0[2] = (input0[2] / m0);
    work0[3] = (input0[3] / m0);

    // Normalize the second vector.
    float m1 = vector_length(input1);
    work1[0] = (input1[0] / m1);
    work1[1] = (input1[1] / m1);
    work1[2] = (input1[2] / m1);
    work1[3] = (input1[3] / m1);


    // Return the inner product.
    return  (work0[0] * work1[0]) + (work0[1] * work1[1]) + (work0[2] * work1[2]);
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
#if __GNUC__ > 3
    "lqc2    $vf1, 0x00(%1)  \n"
    "lqc2    $vf2, 0x00(%2)  \n"
    "vopmula.xyz    $ACC, $vf1, $vf2\n"
    "vopmsub.xyz    $vf2, $vf2, $vf1\n"
    "vsub.w    $vf2, $vf0, $vf0\n"
    "sqc2    $vf2, 0x00(%0)  \n"
#else
    "lqc2    vf1, 0x00(%1)  \n"
    "lqc2    vf2, 0x00(%2)  \n"
    "vopmula.xyz    ACC, vf1, vf2  \n"
    "vopmsub.xyz    vf2, vf2, vf1  \n"
    "vsub.w    vf2, vf0, vf0  \n"
    "sqc2    vf2, 0x00(%0)  \n"
#endif
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------
void vector_lerp(VECTOR output, VECTOR input0, VECTOR input1, float t)
{
    VECTOR timeVector;
    timeVector[0] = t;

    asm __volatile__ (
#if __GNUC__ > 3
   "lqc2        $vf1, 0x00(%1)                  \n"             // load a into vf1
   "lqc2        $vf2, 0x00(%2)                  \n"             // load b into vf2
   "lqc2        $vf3, 0x00(%3)                  \n"             // load t into vf3
   "vsub.xyz    $vf2, $vf2, $vf1                \n"             // store b-a in vf2
   "vmulx.xyz   $vf2, $vf2, $vf3x               \n"             // multiply b-a by t
   "vadd.xyz    $vf1, $vf2, $vf1                \n"             // add (b-a)*t to a
   "sqc2        $vf1, 0x00(%0)                  \n"             // store result in out
#else
   "lqc2        vf1, 0x00(%1)                   \n"             // load a into vf1
   "lqc2        vf2, 0x00(%2)                   \n"             // load b into vf2
   "lqc2        vf3, 0x00(%3)                   \n"             // load t into vf3
   "vsub.xyz    vf2, $vf2, $vf1                 \n"             // store b-a in vf2
   "vmulx.xyz   vf2, $vf2, $vf3x                \n"             // multiply b-a by t
   "vadd.xyz    vf1, $vf2, $vf1                 \n"             // add (b-a)*t to a
   "sqc2        vf1, 0x00(%0)                   \n"             // store result in out
#endif
   : : "r" (output), "r" (input0), "r" (input1), "r" (timeVector)
  );
}


//--------------------------------------------------------
void vector_subtract(VECTOR output, VECTOR input0, VECTOR input1)
{
    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2       $vf1, 0x00(%1)      \n"
    "lqc2       $vf2, 0x00(%2)      \n"
    "vsub.xyz   $vf1, $vf1, $vf2    \n"
    "sqc2       $vf1, 0x00(%0)      \n"
#else
    "lqc2    vf1, 0x00(%1)      \n"
    "lqc2    vf2, 0x00(%2)      \n"
    "vsub.xyz   vf1, vf1, vf2       \n"
    "sqc2    vf1, 0x00(%0)      \n"
#endif
    : : "r" (output), "r" (input0), "r" (input1)
  );
}

//--------------------------------------------------------
void vector_add(VECTOR output, VECTOR input0, VECTOR input1)
{
    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2       $vf1, 0x00(%1)      \n"
    "lqc2       $vf2, 0x00(%2)      \n"
    "vadd.xyz   $vf1, $vf2, $vf1    \n"
    "sqc2       $vf1, 0x00(%0)      \n"
#else
    "lqc2    vf1, 0x00(%1)      \n"
    "lqc2    vf2, 0x00(%2)      \n"
    "vadd.xyz   vf1, vf2, vf1       \n"
    "sqc2    vf1, 0x00(%0)      \n"
#endif
    : : "r" (output), "r" (input0), "r" (input1)
  );
}

//--------------------------------------------------------
// void vector_negate(VECTOR output, VECTOR input0);

//--------------------------------------------------------
void vector_scale(VECTOR output, VECTOR input0, float scalar)
{
    VECTOR timeVector;
    timeVector[0] = scalar;

    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2       $vf1, 0x00(%1)      \n"
    "lqc2       $vf2, 0x00(%2)      \n"
    "vmulx.xyz  $vf1, $vf1, $vf2x   \n"
    "sqc2       $vf1, 0x00(%0)      \n"
#else
    "lqc2    vf1, 0x00(%1)      \n"
    "lqc2    vf2, 0x00(%2)      \n"
    "vmulx.xyz  vf1, vf1, vf2x      \n"
    "sqc2    vf1, 0x00(%0)      \n"
#endif
    : : "r" (output), "r" (input0), "r" (timeVector)
  );
}

//--------------------------------------------------------
void vector_multiply(VECTOR output, VECTOR input0, VECTOR input1)
{
    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2        $vf1, 0x00(%1)      \n"
    "lqc2        $vf2, 0x00(%2)      \n"
    "vmul.xyzw    $vf1, $vf1, $vf2    \n"
    "sqc2        $vf1, 0x00(%0)      \n"
#else
    "lqc2        vf1, 0x00(%1)      \n"
    "lqc2        vf2, 0x00(%2)      \n"
    "vmul.xyzw    vf1, vf1, vf2       \n"
    "sqc2        vf1, 0x00(%0)      \n"
#endif
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------------------------
void vector_projectonvertical(VECTOR output, VECTOR input0)
{
    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2   $vf1, 0x00(%1)  \n"
    "vmove.xy   $vf1, $vf0   \n"
    "sqc2   $vf1, 0x00(%0)  \n"
#else
    "lqc2    vf1, 0x00(%1)  \n"
    "vmove.xy  vf1, vf0    \n"
    "sqc2    vf1, 0x00(%0)  \n"
#endif
    : : "r" (output), "r" (input0)
  );
}

//--------------------------------------------------------------------------
void vector_projectonhorizontal(VECTOR output, VECTOR input0)
{
    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2   $vf1, 0x00(%1)  \n"
    "vmove.z   $vf1, $vf0   \n"
    "sqc2   $vf1, 0x00(%0)  \n"
#else
    "lqc2    vf1, 0x00(%1)  \n"
    "vmove.z  vf1, vf0    \n"
    "sqc2    vf1, 0x00(%0)  \n"
#endif
    : : "r" (output), "r" (input0)
  );
}

//--------------------------------------------------------
void vector_project(VECTOR output, VECTOR input0, VECTOR input1)
{
  asm __volatile__ (
#if __GNUC__ > 3
  "vmaxw.xyzw     $vf3, $vf0, $vf0w   \n"
  "lqc2            $vf1, 0x00(%1)      \n"
  "lqc2            $vf2, 0x00(%2)      \n"
  "vmul.xyz        $vf1, $vf1, $vf2    \n"
  "vadday.x       $ACC, $vf1, $vf1y   \n"
  "vmaddz.x        $vf1, $vf3, $vf1z   \n"
  "vmulx.xyz      $vf2, $vf2, $vf1x   \n"
  "sqc2            $vf2, 0x00(%0)      \n"
#else
  "vmaxw.xyzw     vf3, vf0, vf0w      \n"
  "lqc2            vf1, 0x00(%1)        \n"
  "lqc2            vf2, 0x00(%2)        \n"
  "vmul.xyz        vf1, vf1, vf2       \n"
  "vadday.x       ACC, vf1, vf1y      \n"
  "vmaddz.x        vf1, vf3, vf1z      \n"
  "vmulx.xyz      vf2, vf2, vf1x      \n"
  "sqc2            vf2, 0x00(%0)        \n"
#endif
  : : "r" (output), "r" (input0), "r" (input1)
  : "memory"
  );
}

//--------------------------------------------------------
void vector_projectonplane(VECTOR output, VECTOR input0, VECTOR input1)
{
  asm __volatile__ (
#if __GNUC__ > 3
  "vmaxw.xyzw     $vf3, $vf0, $vf0w   \n"
  "lqc2            $vf4, 0x00(%1)      \n"
  "lqc2            $vf2, 0x00(%2)      \n"
  "vmul.xyz        $vf1, $vf4, $vf2    \n"
  "vadday.x       $ACC, $vf1, $vf1y   \n"
  "vmaddz.x        $vf1, $vf3, $vf1z   \n"
  "vmulx.xyz      $vf2, $vf2, $vf1x   \n"
  "vsub.xyz        $vf2, $vf4, $vf2    \n"
  "sqc2            $vf2, 0x00(%0)      \n"
#else
  "vmaxw.xyzw     vf3, vf0, vf0w      \n"
  "lqc2            vf4, 0x00(%1)        \n"
  "lqc2            vf2, 0x00(%2)        \n"
  "vmul.xyz        vf1, vf4, vf2       \n"
  "vadday.x       ACC, vf1, vf1y      \n"
  "vmaddz.x        vf1, vf3, vf1z      \n"
  "vmulx.xyz      vf2, vf2, vf1x      \n"
  "vsub.xyz       vf2, vf4, vf2       \n"
  "sqc2            vf2, 0x00(%0)        \n"
#endif
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
void matrix_copy(MATRIX output, MATRIX input0)
{
  asm __volatile__ (
#if __GNUC__ > 3
   "lqc2        $vf1, 0x00(%1)  \n"
   "lqc2        $vf2, 0x10(%1)  \n"
   "lqc2        $vf3, 0x20(%1)  \n"
   "lqc2        $vf4, 0x30(%1)  \n"
   "sqc2        $vf1, 0x00(%0)  \n"
   "sqc2        $vf2, 0x10(%0)  \n"
   "sqc2        $vf3, 0x20(%0)  \n"
   "sqc2        $vf4, 0x30(%0)  \n"
#else
   "lqc2        vf1, 0x00(%1)   \n"
   "lqc2        vf2, 0x10(%1)   \n"
   "lqc2        vf3, 0x20(%1)   \n"
   "lqc2        vf4, 0x30(%1)   \n"
   "sqc2        vf1, 0x00(%0)   \n"
   "sqc2        vf2, 0x10(%0)   \n"
   "sqc2        vf3, 0x20(%0)   \n"
   "sqc2        vf4, 0x30(%0)   \n"
#endif
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
    vector_copy((float*)(&output[0]), input0);
    vector_copy((float*)(&output[4]), input1);
    vector_copy((float*)(&output[8]), input2);
    vector_copy((float*)(&output[12]), input3);
}

//--------------------------------------------------------
void matrix_multiply(MATRIX output, MATRIX input0, MATRIX input1)
{
    asm __volatile__ (
#if __GNUC__ > 3
    "lqc2    $vf1, 0x00(%1)  \n"
    "lqc2    $vf2, 0x10(%1)  \n"
    "lqc2    $vf3, 0x20(%1)  \n"
    "lqc2    $vf4, 0x30(%1)  \n"
    "lqc2    $vf5, 0x00(%2)  \n"
    "lqc2    $vf6, 0x10(%2)  \n"
    "lqc2    $vf7, 0x20(%2)  \n"
    "lqc2    $vf8, 0x30(%2)  \n"
    "vmulax.xyzw    $ACC, $vf5, $vf1\n"
    "vmadday.xyzw  $ACC, $vf6, $vf1\n"
    "vmaddaz.xyzw  $ACC, $vf7, $vf1\n"
    "vmaddw.xyzw    $vf1, $vf8, $vf1\n"
    "vmulax.xyzw    $ACC, $vf5, $vf2\n"
    "vmadday.xyzw  $ACC, $vf6, $vf2\n"
    "vmaddaz.xyzw  $ACC, $vf7, $vf2\n"
    "vmaddw.xyzw    $vf2, $vf8, $vf2\n"
    "vmulax.xyzw    $ACC, $vf5, $vf3\n"
    "vmadday.xyzw  $ACC, $vf6, $vf3\n"
    "vmaddaz.xyzw  $ACC, $vf7, $vf3\n"
    "vmaddw.xyzw    $vf3, $vf8, $vf3\n"
    "vmulax.xyzw    $ACC, $vf5, $vf4\n"
    "vmadday.xyzw  $ACC, $vf6, $vf4\n"
    "vmaddaz.xyzw  $ACC, $vf7, $vf4\n"
    "vmaddw.xyzw    $vf4, $vf8, $vf4\n"
    "sqc2    $vf1, 0x00(%0)  \n"
    "sqc2    $vf2, 0x10(%0)  \n"
    "sqc2    $vf3, 0x20(%0)  \n"
    "sqc2    $vf4, 0x30(%0)  \n"
#else
    "lqc2    vf1, 0x00(%1)  \n"
    "lqc2    vf2, 0x10(%1)  \n"
    "lqc2    vf3, 0x20(%1)  \n"
    "lqc2    vf4, 0x30(%1)  \n"
    "lqc2    vf5, 0x00(%2)  \n"
    "lqc2    vf6, 0x10(%2)  \n"
    "lqc2    vf7, 0x20(%2)  \n"
    "lqc2    vf8, 0x30(%2)  \n"
    "vmulax.xyzw    ACC, vf5, vf1  \n"
    "vmadday.xyzw  ACC, vf6, vf1  \n"
    "vmaddaz.xyzw  ACC, vf7, vf1  \n"
    "vmaddw.xyzw    vf1, vf8, vf1  \n"
    "vmulax.xyzw    ACC, vf5, vf2  \n"
    "vmadday.xyzw  ACC, vf6, vf2  \n"
    "vmaddaz.xyzw  ACC, vf7, vf2  \n"
    "vmaddw.xyzw    vf2, vf8, vf2  \n"
    "vmulax.xyzw    ACC, vf5, vf3  \n"
    "vmadday.xyzw  ACC, vf6, vf3  \n"
    "vmaddaz.xyzw  ACC, vf7, vf3  \n"
    "vmaddw.xyzw    vf3, vf8, vf3  \n"
    "vmulax.xyzw    ACC, vf5, vf4  \n"
    "vmadday.xyzw  ACC, vf6, vf4  \n"
    "vmaddaz.xyzw  ACC, vf7, vf4  \n"
    "vmaddw.xyzw    vf4, vf8, vf4  \n"
    "sqc2    vf1, 0x00(%0)  \n"
    "sqc2    vf2, 0x10(%0)  \n"
    "sqc2    vf3, 0x20(%0)  \n"
    "sqc2    vf4, 0x30(%0)  \n"
#endif
    : : "r" (output), "r" (input0), "r" (input1)
    : "memory"
    );
}

//--------------------------------------------------------
void matrix_scale(MATRIX output, MATRIX input0, VECTOR input1) {
    MATRIX work;

    // Apply the scaling.
    matrix_unit(work);
    work[0x00] = input1[0];
    work[0x05] = input1[1];
    work[0x0A] = input1[2];
    matrix_multiply(output, input0, work);
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
  MATRIX work;
 
  // Transpose the matrix.
  work[0x00] = input0[0x00];
  work[0x01] = input0[0x04];
  work[0x02] = input0[0x08];
  work[0x03] = input0[0x0C];
  work[0x04] = input0[0x01];
  work[0x05] = input0[0x05];
  work[0x06] = input0[0x09];
  work[0x07] = input0[0x0D];
  work[0x08] = input0[0x02];
  work[0x09] = input0[0x06];
  work[0x0A] = input0[0x0A];
  work[0x0B] = input0[0x0E];
  work[0x0C] = input0[0x03];
  work[0x0D] = input0[0x07];
  work[0x0E] = input0[0x0B];
  work[0x0F] = input0[0x0F];
 
  // Output the result.
  matrix_copy(output, work);
}
