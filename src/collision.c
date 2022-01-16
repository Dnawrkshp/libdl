#include "collision.h"

/*
 * 
 */
#define COLL_SPHERE_HIT_MOBIES_ARRAY                         ((Moby**)0x00244DC0)

/*
 * 
 */
#define COLL_LINE_FIX_HIT_MOBY                               ((Moby*)0x0023F918)
#define COLL_LINE_FIX_HIT_NORMAL                             ((float*)0x0023F940)
#define COLL_LINE_FIX_HIT_COLLISION_ID                       (*(u8*)0x0023F91C)


Moby** CollMobysSphere_Fix_GetHitMobies(void)
{
  return COLL_SPHERE_HIT_MOBIES_ARRAY;
}

Moby* CollLine_Fix_GetHitMoby(void)
{
  return COLL_LINE_FIX_HIT_MOBY;
}

float* CollLine_Fix_GetHitNormal(void)
{
  return COLL_LINE_FIX_HIT_NORMAL;
}

u8 CollLine_Fix_GetHitCollisionId(void)
{
  return COLL_LINE_FIX_HIT_COLLISION_ID;
}
