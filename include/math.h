/***************************************************
 * FILENAME :    math.h
 * 
 * DESCRIPTION :
 *     Contains many math related function definitions found in Deadlocked.
 * 
 * NOTES :
 *     Each offset is determined per app id.
 *     This is to ensure compatibility between versions of Deadlocked/Gladiator.
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_MATH_H_
#define _LIBDL_MATH_H_

#include "common.h"

//--------------------------------------------------------
#define MATH_PI                         ((float)3.141596)
#define MATH_TAU                        (MATH_PI * (float)2.0)
#define MATH_E                          ((float)2.7182818)
#define MATH_DT                         ((float)0.0166666666)
#define MATH_RAD2DEG                    ((float)180 / MATH_PI)
#define MATH_DEG2RAD                    (MATH_PI / (float)180)

//--------------------------------------------------------
#ifndef MAX
#define MAX(a, b)                       (((a) > (b)) ? (a) : (b))
#endif
#ifndef MIN
#define MIN(a, b)                       (((a) < (b)) ? (a) : (b))
#endif
#ifndef CLAMP
#define CLAMP(value, min, max)          MIN(MAX((value), (min)), (max))
#endif

//--------------------------------------------------------
float cosf(float theta);
float sinf(float theta);
float acosf(float v);
float asinf(float v);
float sqrtf(float f);
float powf(float base, float exp);
float fabsf(float f);
float lerpf(float a, float b, float t);
float signf(float a);
float maxf(float a, float b);
float minf(float a, float b);
float ceilf(float a);
float floorf(float a);
float logf(float a);
float log10f(float a);
float lerpfAngle(float a, float b, float t);
float clamp(float v, float min, float max);
float clampAngle(float theta);
double fmod(double x, double y);
double pow(double x, double y);
double sqrt(double x);
float fastmodf(float x, float y);
float atan2f(float y, float x);

#endif // _LIBDL_MATH_H_
