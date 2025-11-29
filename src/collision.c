#include "collision.h"

/*
 * 
 */
#define COLL_SPHERE_HIT_MOBIES_ARRAY                         ((Moby**)0x00244DC0)

/*
 * 
 */
#define COLL_LINE_FIX_HIT_MOBY                               (*(Moby**)0x0023F918)
#define COLL_LINE_FIX_HIT_POSITION                           ((float*)0x0023F920)
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

float* CollLine_Fix_GetHitPosition(void)
{
  return COLL_LINE_FIX_HIT_POSITION;
}

float* CollLine_Fix_GetHitNormal(void)
{
  return COLL_LINE_FIX_HIT_NORMAL;
}

u8 CollLine_Fix_GetHitCollisionId(void)
{
  return COLL_LINE_FIX_HIT_COLLISION_ID;
}

int CollisionIsWalkable(int id)
{
  id &= 0x1f;
  return id == COLLISION_SURFACE_MAGNET_WALL
      || id == COLLISION_SURFACE_WALKABLE_1
      || id == COLLISION_SURFACE_WALKABLE_2
      || id == COLLISION_SURFACE_WALKABLE_3
      || id == COLLISION_SURFACE_WALKABLE_4
      || id == COLLISION_SURFACE_WATER_TRAIL
      || id == COLLISION_SURFACE_WATER
      ;
}

int CollisionIsNonWalkable(int id)
{
  id &= 0x1f;
  return id == COLLISION_SURFACE_NONWALKABLE_1
      || id == COLLISION_SURFACE_NONWALKABLE_2
      || id == COLLISION_SURFACE_NOWALK_MAGNET_WALL
      ;
}

int CollisionIsLethal(int id)
{
  id &= 0x1f;
  return id == COLLISION_SURFACE_LETHAL_WATER
      || id == COLLISION_SURFACE_LETHAL_WATER_ICE_CUBE
      || id == COLLISION_SURFACE_RING_OF_FIRE
      ;
}
