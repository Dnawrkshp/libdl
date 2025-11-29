/***************************************************
 * FILENAME :    collision.h
 * 
 * DESCRIPTION :
 *     
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_COLLISION_H_
#define _LIBDL_COLLISION_H_

#include <tamtypes.h>
#include "moby.h"

enum CollisionFlags
{
  COLLISION_FLAG_IGNORE_NONE = 0,
  COLLISION_FLAG_IGNORE_STATIC = (1 << 0),
  COLLISION_FLAG_IGNORE_DYNAMIC = (1 << 1),
};

enum CollisionSurfaceIds
{
  COLLISION_SURFACE_SWIMMABLE_WATER = 0x00,
  COLLISION_SURFACE_ACID = 0x01,
  COLLISION_SURFACE_MAGNET_WALL = 0x02,
  COLLISION_SURFACE_WATER = 0x03,
  COLLISION_SURFACE_RING_OF_FIRE = 0x04,
  COLLISION_SURFACE_ELECTRICITY = 0x05,
  COLLISION_SURFACE_NOWALK_MAGNET_WALL = 0x06,
  COLLISION_SURFACE_WALKABLE_1 = 0x07,
  COLLISION_SURFACE_NONWALKABLE_1 = 0x08,
  COLLISION_SURFACE_WALKABLE_2 = 0x09,
  COLLISION_SURFACE_WALKABLE_3 = 0x0A,
  COLLISION_SURFACE_LETHAL_WATER = 0x0B,
  COLLISION_SURFACE_NONWALKABLE_2 = 0x0C,
  COLLISION_SURFACE_LETHAL_WATER_ICE_CUBE = 0x0D,
  COLLISION_SURFACE_WATER_TRAIL = 0x0E,
  COLLISION_SURFACE_WALKABLE_4 = 0x0F,
};

/*
 * NAME :    CollMovingSphere
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
float CollMovingSphere(VECTOR from, VECTOR to, float radius, u64 hitFlag, Moby * moby);

/*
 * NAME :    CollMobysSphere_Fix
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int CollMobysSphere_Fix(VECTOR position, u64 hitFlag, Moby * moby, MobyColDamageIn* colDamageIn, float radius);


/*
 * NAME :    CollMobysSphere_Fix_GetHitMobies
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ Moby** CollMobysSphere_Fix_GetHitMobies(void);

/*
 * NAME :    CollLine_Fix
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int CollLine_Fix(VECTOR from, VECTOR to, u64 hitFlag, Moby * moby, MobyColDamageIn* colDamageIn);

/*
 * NAME :    CollLine_Fix_GetHitMoby
 * 
 * DESCRIPTION :
 *      
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ Moby* CollLine_Fix_GetHitMoby(void);

/*
 * NAME :    CollLine_Fix_GetHitPosition
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ float* CollLine_Fix_GetHitPosition(void);

/*
 * NAME :    CollLine_Fix_GetHitNormal
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ float* CollLine_Fix_GetHitNormal(void);

/*
 * NAME :    CollLine_Fix_GetHitCollisionId
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ u8 CollLine_Fix_GetHitCollisionId(void);

/*
 * NAME :    CollisionIsWalkable
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int CollisionIsWalkable(int id);

/*
 * NAME :    CollisionIsNonWalkable
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int CollisionIsNonWalkable(int id);

/*
 * NAME :    CollisionIsLethal
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int CollisionIsLethal(int id);


#endif // _LIBDL_COLLISION_H_
