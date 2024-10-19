/***************************************************
 * FILENAME :    spline.h
 * 
 * DESCRIPTION :
 *     
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_SPLINE_H_
#define _LIBDL_SPLINE_H_

#include "moby.h"
#include "math3d.h"

typedef struct Spline3D
{
  int Count;
  VECTOR Points[0];
} Spline3D_t;

#endif // _LIBDL_SPLINE_H_
