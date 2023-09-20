/***************************************************
 * FILENAME :		radar.h
 * 
 * DESCRIPTION :
 * 		Contains radar and blip specific offsets and structures for Deadlocked.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_RADAR_H_
#define _LIBDL_RADAR_H_

#include "math3d.h"
#include "common.h"
#include "moby.h"

/*
 * NAME :		RADAR_BLIPS_ARRAY_SIZE
 * 
 * DESCRIPTION :
 * 			Maximum number of elements in the radar blip buffer.
 * 
 * NOTES :
 * 
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
#define RADAR_BLIPS_ARRAY_SIZE                  (0x40)

/*
 * NAME :		SpawnPoint
 * 
 * DESCRIPTION :
 * 			
 * 
 * NOTES :
 * 
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
typedef struct RadarBlip
{
	short Type;
	int Team;
	float X;
	float Y;
	float Rotation;
	Moby * Moby;
	short Life;
} RadarBlip;

/*
 * NAME :		radarGetBlips
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
__LIBDL_GETTER__ RadarBlip * radarGetBlips(void);

/*
 * NAME :		radarGetBlipIndex
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
__LIBDL_GETTER__ int radarGetBlipIndex(Moby * moby);

/*
 * NAME :		radarGetBlipColor
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
__LIBDL_GETTER__ u32 radarGetBlipColor(int blipIdx);

#endif // _LIBDL_RADAR_H_
