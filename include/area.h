/***************************************************
 * FILENAME :    area.h
 * 
 * DESCRIPTION :
 *     
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_AREA_H_
#define _LIBDL_AREA_H_

#include "moby.h"
#include "math3d.h"

typedef struct AreaHeader
{
  int Count;
  int* Splines;
  int* Cuboids;
  int UNK_0C;
  int UNK_10;
  int UNK_14;
  int UNK_18;
  int UNK_1C;
} AreaHeader_t;

typedef struct AreaDef
{
  VECTOR BSphere;
  short SplineCount;
  short CuboidCount;
  short UNK_14;
  short UNK_16;
  int UNK_18;
  int SplineOffset;
  int CuboidOffset;
  int UNK_24;
  int UNK_28;
  int UNK_2C;
} AreaDef_t;

typedef struct Area
{
  VECTOR BSphere;
  short SplineCount;
  short CuboidCount;
  int* Splines;
  int* Cuboids;
} Area_t;

int areaGetCount(void);
int areaGetArea(int areaIndex, Area_t* out);

#endif // _LIBDL_AREA_H_
