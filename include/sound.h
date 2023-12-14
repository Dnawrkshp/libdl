/***************************************************
 * FILENAME :    sound.h
 * 
 * DESCRIPTION :
 *     Contains sound specific offsets and structures for Deadlocked.
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_SOUND_H_
#define _LIBDL_SOUND_H_

#include "math3d.h"
#include "common.h"
#include "moby.h"

/*
 * NAME :    SoundDef
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
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

typedef struct SoundInstance {
  /*   0 */ short int oClass;
  /*   2 */ short int mClass;
  /*   4 */ /* function */ void** pUpdate;
  /*   8 */ void* pVar;
  /*   c */ float range;
  /*  10 */ char cuboid[0x80];
} SoundInstance;

typedef struct SoundData {
  /*   0 */ unsigned int handle;
  /*   4 */ SoundDef* def;
  /*   8 */ short int index;
  /*   a */ short int def_index;
  /*   c */ short int volumeMod;
  /*   e */ short unsigned int occlpos;
  /*  10 */ char status;
  /*  11 */ char loop;
  /*  12 */ char priority;
  /*  13 */ char unused0;
  /*  14 */ int pitch;
  /*  18 */ int pitchMod;
  /*  1c */ Moby* pMoby;
  /*  20 */ VECTOR pos;
  /*  30 */ VECTOR offset;
  /*  40 */ struct SoundInstance* pAmbient;
  /*  44 */ int lineEmitter;
  /*  48 */ int oClass;
  /*  4c */ float pan;
  /*  50 */ int delay;
  /*  54 */ int flags;
  /*  58 */ short unsigned int unique_id;
  /*  5a */ short unsigned int pad16_0;
  /*  5c */ char occl[36];
} SoundData;

/*
 * NAME :    soundPlay
 * 
 * DESCRIPTION :
 *       Returns the respective sound id.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
short soundPlay(SoundDef *, int arg2, Moby * moby, VECTOR arg3, int arg4);

/*
 * NAME :    soundCreateHandle
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
short soundCreateHandle(short soundId);

/*
 * NAME :    soundKillByHandle
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
short soundKillByHandle(short handle);

/*
 * NAME :    soundKillById
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
short soundKillById(short soundId, Moby* moby);

/*
 * NAME :    soundGetData
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
SoundData* soundGetData(short soundId);

#endif // _LIBDL_SOUND_H_
