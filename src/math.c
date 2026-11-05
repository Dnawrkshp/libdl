#include "math.h"

//--------------------------------------------------------
// -- https://stackoverflow.com/a/28050328
float cosf(float x)
{
  const float tp = 1. / (2. * MATH_PI);
  x *= tp;
  x -= .25 + floorf(x + .25);
  x *= 16. * (fabsf(x) - .5);
  x += .225 * x * (fabsf(x) - 1.);
  return x;
}

//--------------------------------------------------------
float sinf(float theta)
{
  return cosf(clampAngle(theta - (MATH_PI / 2)));
}

//--------------------------------------------------------
float acosf(float v)
{
  return (MATH_PI / 2) - asinf(v);
}

//--------------------------------------------------------
float lerpf(float a, float b, float t)
{
  return (b - a) * t + a;
}

//--------------------------------------------------------
float signf(float a)
{
  return (a < 0) ? -1 : 1;
}

//--------------------------------------------------------
float maxf(float a, float b)
{
  return (a < b) ? b : a;
}

//--------------------------------------------------------
float minf(float a, float b)
{
  return (a > b) ? b : a;
}

//--------------------------------------------------------
float lerpfAngle(float a, float b, float t)
{
  if (fabsf(a - b) < MATH_PI)
    return clampAngle(lerpf(a, b, t));
  else if (a < b)
    return clampAngle(lerpf(a, b - MATH_TAU, t));
  else
    return clampAngle(lerpf(a, b + MATH_TAU, t));
}

//--------------------------------------------------------
float clamp(float v, float min, float max)
{
  if (v < min)
    return min;
  if (v > max)
    return max;

  return v;
}

//--------------------------------------------------------
float clampAngle(float theta)
{
  // wrap if outside single wrap bounds
  if (theta > MATH_PI * 3 || theta < -MATH_PI * 3)
    return theta - MATH_TAU * floorf((theta + MATH_PI) / MATH_TAU);

  // handle cheap single wrap case
  if (theta > MATH_PI)
    theta -= MATH_TAU;
  else if (theta < -MATH_PI)
    theta += MATH_TAU;

  return theta;
}

//--------------------------------------------------------
// https://gist.github.com/volkansalma/2972237
float atan2f(float y, float x)
{
  //http://pubs.opengroup.org/onlinepubs/009695399/functions/atan2.html
  //Volkan SALMA

  const float ONEQTR_PI = MATH_PI / 4.0;
  const float THRQTR_PI = 3.0 * MATH_PI / 4.0;
  float r, angle;
  float abs_y = fabsf(y) + 1e-10f; // kludge to prevent 0/0 condition
  if (x < 0.0f)
  {
    r = (x + abs_y) / (abs_y - x);
    angle = THRQTR_PI;
  }
  else
  {
    r = (x - abs_y) / (x + abs_y);
    angle = ONEQTR_PI;
  }
  angle += (0.1963f * r * r - 0.9817f) * r;
  if (y < 0.0f)
    return (-angle); // negate if in quad III or IV
  else
    return (angle);
}

//--------------------------------------------------------
float fabsf(float f)
{
  float result;
  __asm__("abs.s %0, %1" : "=f"(result) : "f"(f));
  return result;
}

//--------------------------------------------------------
// Native EE semantics: negative inputs produce sqrt(abs(f)); no IEEE NaNs.
float sqrtf(float f)
{
  float result;
  __asm__("sqrt.s %0, %1" : "=f"(result) : "f"(f));
  return result;
}

//--------------------------------------------------------
float floorf(float a)
{
  unsigned int bits;
  unsigned int magnitude;
  float truncated;

  __asm__("mfc1 %0, %1" : "=r"(bits) : "f"(a));
  magnitude = bits & 0x7fffffffU;
  // Preserve signed zero; handle fractions (including subnormals) by bits.
  if (magnitude < 0x3f800000U)
  {
    if (magnitude == 0)
      return a;
    return (bits >> 31) ? -1.0f : 0.0f;
  }

  // All finite floats with |a| >= 2^23 are integral. Also pass through
  // IEEE infinity/NaN bit patterns without feeding them to a conversion.
  if (magnitude >= 0x4b000000U)
    return a;

  // On EE, cvt.w.s always truncates toward zero.
  __asm__("cvt.w.s %0, %1\n\t"
          "cvt.s.w %0, %0"
          : "=&f"(truncated) : "f"(a));
  return (truncated > a) ? truncated - 1.0f : truncated;
}

//--------------------------------------------------------
float ceilf(float a)
{
  unsigned int bits;
  unsigned int magnitude;
  float truncated;

  __asm__("mfc1 %0, %1" : "=r"(bits) : "f"(a));
  magnitude = bits & 0x7fffffffU;
  if (magnitude < 0x3f800000U)
  {
    if (magnitude == 0)
      return a;
    return (bits >> 31) ? -0.0f : 1.0f;
  }
  if (magnitude >= 0x4b000000U)
    return a;

  __asm__("cvt.w.s %0, %1\n\t"
          "cvt.s.w %0, %0"
          : "=&f"(truncated) : "f"(a));
  return (truncated < a) ? truncated + 1.0f : truncated;
}

//--------------------------------------------------------
float fastmodf(float x, float y)
{
  float quotient = x / y;
  float integral;

  // Match the game's approximate (quotient - trunc(quotient)) * y formula.
  // COP1 avoids VU0 register transfers, Q waits, and game-state dispatch.
  __asm__("cvt.w.s %0, %1\n\t"
          "cvt.s.w %0, %0"
          : "=&f"(integral) : "f"(quotient));
  return (quotient - integral) * y;
}
