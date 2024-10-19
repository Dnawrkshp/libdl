#include "string.h"
#include "player.h"
#include "team.h"
#include "spline.h"

#define SPLINES                         ((Spline3D_t**)0x00276200)

//--------------------------------------------------------------------------------
Spline3D_t* splineGetSpline(int splineIndex)
{
  return SPLINES[splineIndex];
}
