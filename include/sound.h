/***************************************************
 * FILENAME :		sound.h
 * 
 * DESCRIPTION :
 * 		Contains sound specific offsets and structures for Deadlocked.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_SOUND_H_
#define _LIBDL_SOUND_H_

#include "math3d.h"
#include "common.h"
#include "moby.h"

/*
 * NAME :		SoundDef
 * 
 * DESCRIPTION :
 * 			
 * 
 * NOTES :
 * 
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
typedef struct SoundDef
{
	float MinRange;
	float MaxRange;
	int MinVolume;
	int MaxVolume;
	int MinPitch;
	int MaxPitch;
	char Loop;
	char Flags;
	short Index;
	int BankIndex;
} SoundDef;

/*
 * NAME :		soundPlay
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
int soundPlay(SoundDef *, int arg2, Moby * moby, VECTOR arg3, int arg4);

#endif // _LIBDL_SOUND_H_
