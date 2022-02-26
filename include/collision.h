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
int CollMobysSphere_Fix(VECTOR position, u64 hitFlag, Moby * moby, u64 a3, float radius);


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
int CollLine_Fix(VECTOR from, VECTOR to, u64 hitFlag, Moby * moby, u64 t0);

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
