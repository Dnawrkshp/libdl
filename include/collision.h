/***************************************************
 * FILENAME :		collision.h
 * 
 * DESCRIPTION :
 * 		
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
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

/*
 * NAME :		CollMovingSphere
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
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
float CollMovingSphere(VECTOR from, VECTOR to, float radius, u64 hitFlag, Moby * moby);

/*
 * NAME :		CollMobysSphere_Fix
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
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int CollMobysSphere_Fix(VECTOR position, u64 hitFlag, Moby * moby, MobyColDamageIn* colDamageIn, float radius);


/*
 * NAME :		CollMobysSphere_Fix_GetHitMobies
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
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ Moby** CollMobysSphere_Fix_GetHitMobies(void);

/*
 * NAME :		CollLine_Fix
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
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int CollLine_Fix(VECTOR from, VECTOR to, u64 hitFlag, Moby * moby, MobyColDamageIn* colDamageIn);

/*
 * NAME :		CollLine_Fix_GetHitMoby
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
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ Moby* CollLine_Fix_GetHitMoby(void);

/*
 * NAME :		CollLine_Fix_GetHitPosition
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
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ float* CollLine_Fix_GetHitPosition(void);

/*
 * NAME :		CollLine_Fix_GetHitNormal
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
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ float* CollLine_Fix_GetHitNormal(void);

/*
 * NAME :		CollLine_Fix_GetHitCollisionId
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
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ u8 CollLine_Fix_GetHitCollisionId(void);


#endif // _LIBDL_COLLISION_H_
