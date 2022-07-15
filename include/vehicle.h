/***************************************************
 * FILENAME :		vehicle.h
 * 
 * DESCRIPTION :
 * 		Contains vehicle specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 		Each offset is determined per app id.
 * 		This is to ensure compatibility between versions of Deadlocked/Gladiator.
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_VEHICLE_H_
#define _LIBDL_VEHICLE_H_

#include "math.h"
#include "weapon.h"
#include "moby.h"
#include "pad.h"
#include "guber.h"
#include "team.h"
#include "math3d.h"
#include "player.h"

struct tDR_Profile {
	/*   0 */ float LinearPredictionCutoff;
	/*   4 */ float LinearConvergenceThreshold;
	/*   8 */ float MaxLinearConvergenceDelta;
	/*   c */ float MinLinearConvergenceDelta;
	/*  10 */ float MinSmoothConvergenceDelta;
	/*  14 */ float PositionErrorThreshold;
	/*  18 */ float MaxTrackSpeed;
	/*  1c */ float MaxConvergeSpeed;
	/*  20 */ float Accel;
	/*  24 */ float Decel;
};

struct tDR_PositionHistory {
	/*   0 */ VECTOR Pos[2];
	/*  20 */ int Time[2];
	/*  28 */ int Oldest;
	/*  2c */ int pad[1];
};

struct tDR_Vars {
	/*   0 */ struct tDR_PositionHistory Pos_History;
	/*  30 */ VECTOR Velocity_Tracking;
	/*  40 */ VECTOR Accel_Tracking;
	/*  50 */ VECTOR Velocity_Converge;
	/*  60 */ VECTOR Accel_Converge;
	/*  70 */ VECTOR Pos_Start;
	/*  80 */ VECTOR Pos_Converge;
	/*  90 */ VECTOR Pos_Current;
	/*  a0 */ VECTOR Velocity_Current;
	/*  b0 */ VECTOR Accel_Current;
	/*  c0 */ VECTOR Pos_Start_Minus_One;
	/*  d0 */ VECTOR Pos_Converge_Plus_One;
	/*  e0 */ int Time_Start_Minus_One;
	/*  e4 */ int Time_Converge_Plus_One;
	/*  e8 */ int Time_StartStopping;
	/*  ec */ float Dist_Converge;
	/*  f0 */ struct tDR_Profile* pProfile;
	/*  f4 */ int Time_Start;
	/*  f8 */ int Time_Converge;
	/*  fc */ int Time_Current;
	/* 100 */ VECTOR Pos_Actual;
	/* 110 */ struct tDR_PositionHistory Pos_PendingUpdates;
	/* 140 */ int Time_ProcessPendingUpdate;
	/* 144 */ int Interval_Latency_Offset;
	/* 148 */ unsigned int flags;
	/* 14c */ int pad;
	/* 150 */ int prevKnownSyncedTime;
	/* 154 */ int KnownSyncedTime;
	/* 158 */ int PreviousUpdateTime;
	/* 15c */ int PendingSyncTime;
	/* 160 */ VECTOR PendingSyncedPos;
	/* 170 */ VECTOR KnownSyncedPos;
	/* 180 */ VECTOR prevKnownSyncedPos;
};

struct VehicleInterface {
	/*   0 */ int iVehicleType;
	/*   4 */ int bArialVehicle;
	/*   8 */ float fVehicleRadius;
	/*   c */ unsigned int iVehicleInitFlags;
	/*  10 */ int iRespawnTime;
	/*  14 */ float fPlayerRunOverMinSpeed;
	/*  18 */ float fPlayerRunOverKillSpeed;
	/*  1c */ int iShotPrimaryType;
	/*  20 */ void* SpawnShotPrimary;
	/*  24 */ int iShotSecondaryType;
	/*  28 */ void* SpawnShotSecondary;
	/*  2c */ float fVehicleTopHeight;
	/*  30 */ float fPlayerExitRadius;
	/*  34 */ int iSeatSwitchButton;
	/*  38 */ int iMPHelpMessage;
	/*  3c */ int iMPRadarIcon;
	/*  40 */ int iDriverMessage;
	/*  44 */ int iPassengerMessage;
	/*  50 */ VECTOR vDriverCameraOfs;
	/*  60 */ struct tDR_Profile DRProfile;
	/*  88 */ /* function */ void** GetVehicleBase;
	/*  8c */ /* function */ void** SetAsUnspawned;
	/*  90 */ /* function */ void** ReinitPhysics;
	/*  94 */ /* function */ void** UpdatePhysics;
	/*  98 */ /* function */ void** DamageReact;
	/*  9c */ /* function */ void** UpdateLocalDriverAttack;
	/*  a0 */ /* function */ void** UpdatePassenger;
	/*  a4 */ /* function */ void** UpdateRemoteVehicle;
	/*  a8 */ /* function */ void** UpdateVisuals;
	/*  ac */ /* function */ void** GetExitGroundHeight;
	/*  b0 */ /* function */ void** CheckSpecialEnterRules;
	/*  b4 */ /* function */ void** CheckSpecialExitRules;
	/*  b8 */ /* function */ void** GetJustExitedPlayer;
	/*  bc */ /* function */ void** SetAutoSpawn;
	/*  c0 */ /* function */ void** GetCamera29Pitch;
	/*  c4 */ /* function */ void** HandleSpecialDamageRules;
	/*  c8 */ /* function */ void** IsPlayerLockedIn;
};

typedef struct VehicleBase {
    /*   0 */ struct Guber Guber;
	/*  20 */ struct tDR_Vars drVars;
	/* 1b0 */ MATRIX invMtx;
	/* 1f0 */ VECTOR netLocalPos;
	/* 200 */ VECTOR netLocalRot;
	/* 210 */ VECTOR netUpdatedPos;
	/* 220 */ VECTOR netUpdatedRot;
	/* 230 */ VECTOR netLocalPassengerRot;
	/* 240 */ VECTOR netUpdatedPassengerRot;
	/* 250 */ VECTOR vel;
	/* 260 */ VECTOR rotSpeed;
	/* 270 */ VECTOR initPos;
	/* 280 */ VECTOR initRot;
	/* 290 */ VECTOR comeToRestStart;
	/* 2a0 */ VECTOR comeToRestTotal;
	/* 2b0 */ struct Moby* pMoby;
	/* 2b4 */ struct Moby* pTarget;
	/* 2b8 */ struct Player* pDriver;
	/* 2bc */ struct Player* pPassenger;
	/* 2c0 */ int netUpdatedTimeStamp;
	/* 2c4 */ int netUpdatedPassengerTimeStamp;
	/* 2c8 */ int explodeTime;
	/* 2cc */ int noRiderTimer;
	/* 2d0 */ int resurrectTimer;
	/* 2d4 */ int resurrectTimeTotal;
	/* 2d8 */ unsigned int flags;
	/* 2dc */ short int vehicleType;
	/* 2de */ char whichGun;
	/* 2df */ char whichGun2;
	/* 2e0 */ char inAir;
	/* 2e1 */ char masterInAir;
	/* 2e2 */ short int inAirTimer;
	/* 2e4 */ short int vehicleMobyUID;
	/* 2e6 */ short int exitToggle;
	/* 2e8 */ float hitPoints;
	/* 2ec */ float maxHP;
	/* 2f0 */ float speed;
	/* 2f4 */ int comeToRestTime;
	/* 2f8 */ int waitDriverTime;
	/* 2fc */ char bDriverInValidState;
	/* 2fd */ char bPassengerInValidState;
	/* 2fe */ char bDoPostSinkingCameraRaise;
	/* 2ff */ char cPad[1];
	/* 300 */ int waitPassengerTime;
	/* 304 */ int explodeRequestSent;
	/* 308 */ int justExited;
	/* 30c */ int teamNum;
	/* 310 */ int iLastExplodedTime;
	/* 314 */ int iLastDamageTime;
	/* 318 */ float fDriverAttackDamage;
	/* 31c */ float fPassengerAttackDamage;
	/* 320 */ int timeSinceLastMessage;
	/* 324 */ struct VehicleInterface* pInterface;
	/* 328 */ struct Player* pCutSceneDriver;
	/* 32c */ struct Player* pCutScenePassenger;
	/* 330 */ struct Moby* pSpawningEffect;
	/* 334 */ struct Moby* pSpawningPad;
	/* 338 */ float fRunOverDamageMultiplier;
	/* 33c */ int iPad[1];
} Vehicle;

/*
 * NAME :		vehicleRemovePlayer
 * 
 * DESCRIPTION :
 * 			Removes the given player from the given vehicle.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void vehicleRemovePlayer(Vehicle * vehicle, struct Player * player);

/*
 * NAME :		vehicleAddPlayer
 * 
 * DESCRIPTION :
 * 			Add the given player to the given vehicle.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void vehicleAddPlayer(Vehicle * vehicle, struct Player * player);

#endif // _LIBDL_VEHICLE_H_
