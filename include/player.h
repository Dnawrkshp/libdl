/***************************************************
 * FILENAME :		player.h
 * 
 * DESCRIPTION :
 * 		Contains player specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 		Each offset is determined per app id.
 * 		This is to ensure compatibility between versions of Deadlocked/Gladiator.
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_PLAYER_H_
#define _LIBDL_PLAYER_H_

#include "math.h"
#include "weapon.h"
#include "moby.h"
#include "pad.h"
#include "team.h"
#include "math3d.h"
#include "vehicle.h"
#include "common.h"
#include "guber.h"

/*
 * Maximum health of player.
 */
#define PLAYER_MAX_HEALTH                   (50)

/*
 * NAME :		PlayerCameraType
 * 
 * DESCRIPTION :
 * 			Defines the three player camera types.
 *          These are used in the player struct under 'CameraType'
 * 
 * NOTES :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
enum PlayerCameraType
{
    CAMERA_TYPE_THIRD_PERSON,
    CAMERA_TYPE_LOCK_STRAFE,
    CAMERA_TYPE_FIRST_PERSON
};

/*
 * NAME :		PlayerState
 * 
 * DESCRIPTION :
 * 			Defines the player states.
 * 
 * NOTES :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
enum PlayerState {
	PLAYER_STATE_IDLE = 0,
	PLAYER_STATE_LOOK = 1,
	PLAYER_STATE_WALK = 2,
	PLAYER_STATE_SKID = 3,
	PLAYER_STATE_CROUCH = 4,
	PLAYER_STATE_QUICK_TURN = 5,
	PLAYER_STATE_FALL = 6,
	PLAYER_STATE_JUMP = 7,
	PLAYER_STATE_GLIDE = 8,
	PLAYER_STATE_RUN_JUMP = 9,
	PLAYER_STATE_LONG_JUMP = 10,
	PLAYER_STATE_FLIP_JUMP = 11,
	PLAYER_STATE_JINK_JUMP = 12,
	PLAYER_STATE_ROCKET_JUMP = 13,
	PLAYER_STATE_DOUBLE_JUMP = 14,
	PLAYER_STATE_HELI_JUMP = 15,
	PLAYER_STATE_CHARGE_JUMP = 16,
	PLAYER_STATE_WALL_JUMP = 17,
	PLAYER_STATE_WATER_JUMP = 18,
	PLAYER_STATE_COMBO_ATTACK = 19,
	PLAYER_STATE_JUMP_ATTACK = 20,
	PLAYER_STATE_THROW_ATTACK = 21,
	PLAYER_STATE_GET_HIT = 22,
	PLAYER_STATE_LEDGE_GRAB = 23,
	PLAYER_STATE_LEDGE_IDLE = 24,
	PLAYER_STATE_LEDGE_TRAVERSE_LEFT = 25,
	PLAYER_STATE_LEDGE_TRAVERSE_RIGHT = 26,
	PLAYER_STATE_LEDGE_JUMP = 27,
	PLAYER_STATE_VISIBOMB = 28,
	PLAYER_STATE_TARGETING = 29,
	PLAYER_STATE_GUN_WAITING = 30,
	PLAYER_STATE_WALLOPER_ATTACK = 31,
	PLAYER_STATE_ATTACK_BOUNCE = 32,
	PLAYER_STATE_ROCKET_STOMP = 33,
	PLAYER_STATE_GLOVE_ATTACK = 34,
	PLAYER_STATE_GRAPPLE_SHOOT = 35,
	PLAYER_STATE_GRAPPLE_PULL = 36,
	PLAYER_STATE_GRAPPLE_PULL_VEHICLE = 37,
	PLAYER_STATE_SUCK_CANNON = 38,
	PLAYER_STATE_GRIND = 39,
	PLAYER_STATE_GRIND_JUMP = 40,
	PLAYER_STATE_GRIND_SWITCH_JUMP = 41,
	PLAYER_STATE_GRIND_ATTACK = 42,
	PLAYER_STATE_SWING = 43,
	PLAYER_STATE_SWING_FALL = 44,
	PLAYER_STATE_RECOIL = 45,
	PLAYER_STATE_ICE_WALK = 46,
	PLAYER_STATE_DEVASTATOR = 47,
	PLAYER_STATE_SLIDE = 48,
	PLAYER_STATE_VEHICLE = 49,
	PLAYER_STATE_SWIMUNDER = 50,
	PLAYER_STATE_IDLEUNDER = 51,
	PLAYER_STATE_CHARGEUNDER = 52,
	PLAYER_STATE_SWIMSURF = 53,
	PLAYER_STATE_IDLESURF = 54,
	PLAYER_STATE_BOLT_CRANK = 55,
	PLAYER_STATE_LAVA_JUMP = 56,
	PLAYER_STATE_DEATH = 57,
	PLAYER_STATE_BOARD = 58,
	PLAYER_STATE_MAGNE_WALK = 59,
	PLAYER_STATE_GRIND_HIT = 62,
	PLAYER_STATE_GRIND_JUMP_TURN = 63,
	PLAYER_STATE_VENDOR_BOOTH = 98,
	PLAYER_STATE_NPC = 99,
	PLAYER_STATE_WALK_TO_POS = 100,
	PLAYER_STATE_SKID_TO_POS = 101,
	PLAYER_STATE_IDLE_TO_POS = 102,
	PLAYER_STATE_JUMP_TO_POS = 103,
	PLAYER_STATE_QUICKSAND_SINK = 104,
	PLAYER_STATE_QUICKSAND_JUMP = 105,
	PLAYER_STATE_DROWN = 106,
	PLAYER_STATE_MAGNE_ATTACK = 111,
	PLAYER_STATE_MAGNE_JUMP = 112,
	PLAYER_STATE_CUT_SCENE = 113,
	PLAYER_STATE_WADE = 114,
	PLAYER_STATE_ZIP = 115,
	PLAYER_STATE_GET_HIT_SURF = 116,
	PLAYER_STATE_GET_HIT_UNDER = 117,
	PLAYER_STATE_DEATH_FALL = 118,
	PLAYER_STATE_SLOPESLIDE = 120,
	PLAYER_STATE_JUMP_BOUNCE = 121,
	PLAYER_STATE_DEATHSAND_SINK = 122,
	PLAYER_STATE_LAVA_DEATH = 123,
	PLAYER_STATE_CHARGE = 125,
	PLAYER_STATE_ICEWATER_FREEZE = 126,
	PLAYER_STATE_ELECTRIC_DEATH = 127,
	PLAYER_STATE_ROCKET_HOVER = 128,
	PLAYER_STATE_ELECTRIC_DEATH_UNDER = 129,
	PLAYER_STATE_SKATE = 130,
	PLAYER_STATE_MOON_JUMP = 131,
	PLAYER_STATE_JET = 132,
	PLAYER_STATE_THROW_SHURIKEN = 133,
	PLAYER_STATE_RACEBIKE = 134,
	PLAYER_STATE_SPEEDBOAT = 135,
	PLAYER_STATE_HOVERPLANE = 136,
	PLAYER_STATE_LATCH_GRAB = 137,
	PLAYER_STATE_LATCH_IDLE = 138,
	PLAYER_STATE_LATCH_JUMP = 139,
	PLAYER_STATE_PULLSHOT_ATTACH = 140,
	PLAYER_STATE_PULLSHOT_PULL = 141,
	PLAYER_STATE_GET_FLATTENED = 142,
	PLAYER_STATE_SKYDIVE = 143,
	PLAYER_STATE_ELECTRIC_GET_HIT = 144,
	PLAYER_STATE_FLAIL_ATTACK = 145,
	PLAYER_STATE_MAGIC_TELEPORT = 146,
	PLAYER_STATE_TELEPORT_IN = 147,
	PLAYER_STATE_DEATH_NO_FALL = 148,
	PLAYER_STATE_TAUNT_SQUAT = 149,
	PLAYER_STATE_TAUNT_ASSPOINT = 150,
	PLAYER_STATE_TAUNT_ASSRUB = 151,
	PLAYER_STATE_TURRET_DRIVER = 152,
	PLAYER_STATE_WAIT_FOR_RESURRECT = 153,
	PLAYER_STATE_WAIT_FOR_JOIN = 154,
	PLAYER_STATE_DROPPED = 155,
	PLAYER_STATE_CNT = 156
};

/*
 * NAME :		CameraAngle
 * 
 * DESCRIPTION :
 * 			Contains camera angle settings and information.
 * 
 * NOTES :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
typedef struct CameraAngle
{
    float Value;
    float Velocity;
    float MaxVelocity;
    float UNK0;
    float Acceleration;
    float UNK1[3];
} CameraAngle;

struct tNW_PlayerWarpMessage {
	/*   0 */ char netPlayerIndex;
	/*   1 */ char dontKillMeInBaseHack;
	/*   2 */ char resetPadRing;
	/*   3 */ char playerSeq;
	/*   4 */ float playerPos[3];
	/*  10 */ float playerRot[3];
	/*  1c */ short int state;
	/*  1e */ char isResurrecting;
};

struct tNW_PlayerData {
	/*   0 */ VECTOR vPosition;
	/*  10 */ float vRotation[3];
	/*  1c */ int timeStamp;
	/*  20 */ VECTOR vIdealVec;
	/*  30 */ int idealVecTime;
	/*  34 */ int accountId;
	/*  38 */ unsigned int UID;
	/*  3c */ int playerType;
	/*  40 */ int playerTeam;
	/*  44 */ float hitPoints;
	/*  48 */ int handGadget;
	/*  4c */ int lastKeepAlive;
	/*  50 */ int remoteTarget;
	/*  54 */ int playerIndex;
	/*  58 */ int cameraElevationSettings[3];
	/*  64 */ int cameraAzimuthSettings[3];
	/*  70 */ int cameraRotationSettings[3];
	/*  7c */ int rank[6];
	/*  94 */ char cGadgetLevel[32];
	/*  b4 */ unsigned int updated;
	/*  b8 */ short unsigned int gadgetsWithAmmo;
	/*  ba */ short unsigned int fpsMode;
	/*  bc */ unsigned char flags;
};

struct tNW_PlayerPadInputMessage {
	/*   0 */ int cameraRot[4];
	/*  10 */ short unsigned int playerPos[3];
	/*  16 */ unsigned char sequenceNum;
	/*  17 */ unsigned char stateAndRotFlag;
	/*  17 */ unsigned char playerIndex;
	/*  17 */ unsigned char flags;
	/*  17 */ unsigned char framesWithButtonDiffs;
	/*  18 */ unsigned char pad_data[128];
};

struct tNW_PlayerPadInputMessageListElem {
	/*   0 */ struct tNW_PlayerPadInputMessage msg;
	/*  98 */ struct tNW_PlayerPadInputMessageListElem* pNext;
	/*  9c */ struct tNW_PlayerPadInputMessageListElem* pPrev;
	/*  a0 */ char inUse;
};

/*
 *
 */
struct tNW_Player {
	/*   0 */ int netClientIndex;
	/*   4 */ struct tNW_PlayerData* pNetPlayerData;
	/*   8 */ short int bLocal;
	/*   a */ short int bSpawned;
	/*   c */ short int bGiveMeTheDasBoot;
	/*   e */ short int bCallbackCalled;
	/*  10 */ int latency;
	/*  14 */ unsigned int flags;
	/*  18 */ char accountName[32];
	/*  38 */ struct tNW_PlayerWarpMessage warpMessage;
	/*  58 */ struct tNW_PlayerPadInputMessageListElem padMessageElems[16];
	/* a98 */ char padMessageCurDecodePos;
	/* a99 */ char activePadFrame;
	/* a9c */ int lastActiveSeqNum;
	/* aa0 */ int numBufferedPadMessageElems;
	/* aa4 */ int receivedActivePadMsgFrame;
	/* aa8 */ char pullBack;
	/* aa9 */ signed char jitterThrottleFrames;
	/* aaa */ char numConseqSkips;
	/* aac */ struct tNW_PlayerPadInputMessageListElem* pActivePadMsg;
	/* ab0 */ struct tNW_PlayerPadInputMessageListElem* pPadMsgListTail;
	/* ab4 */ unsigned char padFrame[20];
	/* ac8 */ int homeBaseIndex;
	/* acc */ int homeNodeIndex;
};


/*
 * NAME :		HeroTimers
 * 
 * DESCRIPTION :
 * 			
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
typedef struct HeroTimers {
	/*   0 */ int state;
	/*   4 */ int stateType;
	/*   8 */ int subState;
	/*   c */ int animState;
	/*  10 */ int stickOn;
	/*  14 */ int stickOff;
	/*  18 */ short int noLedge;
	/*  1a */ short int allowQuickSelect;
	/*  1c */ int firing;
	/*  20 */ int moveModifierTimer;
	/*  24 */ int boltMultTimer;
	/*  28 */ int wallJumpOk;
	/*  2c */ short int postHitInvinc;
	/*  2e */ short int ignoreHeroColl;
	/*  30 */ short int collOff;
	/*  32 */ short int invisible;
	/*  34 */ short int slide;
	/*  36 */ short int bezerker;
	/*  38 */ short int noWallJump;
	/*  3a */ short int noJumps;
	/*  3c */ short int boxBreaking;
	/*  3e */ short int noMag;
	/*  40 */ short int noChargeJump;
	/*  42 */ short int resurrectWait;
	/*  44 */ int timeSinceStrafe;
	/*  48 */ short int noHackerSwitch;
	/*  4a */ short int noInput;
	/*  4c */ short int noJumpLookBack;
	/*  4e */ short int noShockAbort;
	/*  50 */ short int stuck;
	/*  52 */ short int noSwing;
	/*  54 */ short int noWaterJump;
	/*  56 */ short int noWaterDive;
	/*  58 */ short int facialExpression;
	/*  5a */ short int idle;
	/*  5c */ short int bumpPushing;
	/*  5e */ short int lookButton;
	/*  60 */ short int edgeStop;
	/*  62 */ short int clankRedEye;
	/*  64 */ short int edgePath;
	/*  66 */ short int magSlope;
	/*  68 */ short int ledgeCamAdj;
	/*  6a */ short int screenFlashRed;
	/*  6c */ short int holdDeathPose;
	/*  6e */ short int strafeMove;
	/*  70 */ short int noRaisedGunArm;
	/*  72 */ short int noExternalRot;
	/*  74 */ short int screenFlashOn;
	/*  76 */ short int screenFadeOn;
	/*  78 */ int lastVehicleTimer;
	/*  7c */ float gadgetRefire;
	/*  80 */ int timeAlive;
	/*  84 */ int noFpsCamTimer;
	/*  88 */ int endDeathEarly;
	/*  8c */ short int forceGlide;
	/*  8e */ short int noGrind;
	/*  90 */ short int instaGrind;
	/*  92 */ short int noCamInputTimer;
	/*  94 */ short int postTeleportTimer;
	/*  96 */ short int multiKillTimer;
	/*  98 */ short int armorLevelTimer;
	/*  9a */ short int damageMuliplierTimer;
	/*  9c */ int powerupEffectTimer;
	/*  a0 */ short int juggernautFadeTimer;
	/*  a2 */ short int onFireTimer;
	/*  a4 */ short int acidTimer;
	/*  a6 */ short int freezeTimer;
	/*  a8 */ short int noHelmTimer;
	/*  aa */ short int elecTimer;
	/*  ac */ short int boltDistMulTimer;
	/*  ae */ short int explodeTimer;
	/*  b0 */ short int noDeathTimer;
	/*  b2 */ short int invincibilityTimer;
} HeroTimers;

/*
 * NAME :		Player
 * 
 * DESCRIPTION :
 * 			Contains the player data.
 * 
 * NOTES :
 *          This is very large and documentation is incomplete.
 *          Much of the padding is to skip over area's not yet understood.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
typedef struct Player
{
    struct Guber Guber;                                             // 0x00
    char UNK0[0x88];                                                // 0x18

    VECTOR PlayerPosition;                                          // 0xA0
		
		union {
			VECTOR PlayerRotation;
			struct {
				float PlayerRoll;
				float PlayerPitch;
				float PlayerYaw;
			};
		};
    
    char UNK2[0x70];                                                // 0xBC

    VECTOR Velocity;                                                // 0x130

    char UNK164[0x1BC];                                             // 0x140

    int Airwalk;                                                    // 0x2FC

    char UNK3[0x70];                                                // 0x300

    HeroTimers timers;                                              // 0x370

    char UNK10[0x3CC];                                              // 0x430

    // First instance of weapon held id
    // This one is zero for any item that isn't a gun
    // So wrench and swingshot are 0
    int WeaponHeldGun;                                              // 0x7FC

    char UNK11[0x1150];                                             // 0x800

    VECTOR CameraPos;                                               // 0x1950
    VECTOR CameraDir;                                               // 0x1960
    MATRIX CameraMatrix;                                            // 0x1970

    CameraAngle CameraYaw;                                          // 0x19B0
    CameraAngle CameraPitch;                                        // 0x19D0

    char UNK13[0x0C];                                               // 0x19F0

    // This is a pointer to the moby that the
    // player is looking/aiming at
    Moby * LookAtMoby;                                              // 0x19FC

    char UNK12[0x20];                                               // 0x1A00

    char UNK14[0x04];                                               // 0x1A20

    float CameraPitchMin;                                           // 0x1A24
    float CameraPitchMax;                                           // 0x1A28

    Moby * SkinMoby;                                                // 0x1A2C

    float CameraDistance;                                           // 0x1A30

    char UNK15[0x1C];                                               // 0x1A34

    short CameraType2;                                              // 0x1A50

    char UNK45[0x4A];                                               // 0x1A52

    int LocalPlayerIndex;                                           // 0x1A9C

    char UNK16[0x8];                                                // 0x1AA0

    int PlayerId;                                                   // 0x1AA8

    char UNK33[0x34];                                               // 0x1AAC

    int CameraType;                                                 // 0x1AE0

    char UNK47[0x18];                                               // 0x1AE4

    float CameraElevation;                                          // 0x1AFC

    char UNK17[0x7F8];                                              // 0x1B00

    // When 1, the player is trying to shoot
    int IsShooting;                                                 // 0x22F8

    char UNK29[0x18];                                               // 0x22FC

    // When this value is set to 3,
    // The weapon held is changed to the weapon id
    // set in WeaponHeldId
    int WeaponSwitchState;                                          // 0x2314
    int WeaponSwitchLastWeaponHeldId;                               // 0x2318

    char UNK28[0x194];                                              // 0x231C

    int WeaponHeldId0;                                              // 0x24B0

    char UNK18[0x118];                                              // 0x24B4

    int PlayerState;                                                // 0x25CC

    char UNK19[0x90];                                               // 0x25D0

    // These seem to do a variety of things
    // 0x04: 1 = Disables shooting and cbooting
    // 0x06: 1 = Equips wrench
    // 0x0C: 1 = Equips swingshot
    // 0x0D: Toggles respawn popup if dead, otherwise just fucks camera
    // 0x12: 1 = Disables moving
    // 0x2660
    union {
        struct {
            char RaisedGunArm;
            char InShallowWater;
            char Invisible;
            char HideWeapon;
            char GadgetsOff;
            char GadgetNotReady;
            char WrenchOnly;
            char HoldingDeathAnim;
            char HideWrench;
            char SpawnBoltsToMe;
            char AiFollowingMe;
            char ForceWrenchSwitch;
            char ForceSwingSwitch;
            char IsLocal;
            char InBaseHack;
            char ShieldTrigger;
            char CurSeg;
            char HandGadgetType;
            char ExternalUpdate;
        };
        char UNKFlags[0x14];                                            
    };

    int ChangeWeaponHeldId;                                         // 0x2674

    char UNK20[0x14];                                               // 0x2678

    int WeaponHeldId;                                               // 0x268C

    char UNK27[0x54];                                               // 0x2690

    u32 WeaponHeldDataPointer;                                      // 0x26E4

    char UNK21[0x738];                                              // 0x26E8
    
    float Health;                                                   // 0x2E20
    
    char UNK22[0xB2];                                               // 0x2E24

    char Explode;                                                   // 0x2ED6

    char UNK38[0x11];                                               // 0x2ED7

    Moby * HeldMoby;                                                // 0x2EE8

    void * UNK44;                                                   // 0x2EEC

    // Points to the player moby
    Moby * PlayerMoby;                                              // 0x2EF0

    Vehicle * Vehicle;                                              // 0x2EF4

    char UNK23[0x08];                                               // 0x2EF8

    PadButtonStatus * Paddata;                                      // 0x2F00

    char UNK24[0x10];                                               // 0x2F04

    int Team;                                                       // 0x2F14

    // Not super sure what this is
    // But it seems to only get set when entering/leaving vehicles
    // And setting it to non-zero stops the game from
    // letting you get in another vehicle
    int InVehicle;                                                  // 0x2F18

    char UNK25[0x0C];                                               // 0x2F1C

    struct tNW_Player * pNetPlayer;                                 // 0x2F28

    char UNK36[0x84];                                               // 0x2F2C

    float DamageMultiplier;                                         // 0x2FB0

    char UNK26[0x0C];                                               // 0x2FB4

    float Speed;                                                    // 0x2FC0

} Player;


typedef void (*PlayerUpdateState_func)(Player * player, int stateId, int a2, int a3, int t0);

/*
 * NAME :		PlayerVTable
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
typedef struct PlayerVTable
{
    void * FUNC_00;
    void * FUNC_04;
    void * FUNC_08;
    void * FUNC_0C;
    void * FUNC_10;
    void * FUNC_14;
    void * FUNC_18;
    void * FUNC_1C;
    void * FUNC_20;
    void * FUNC_24;
    void * FUNC_28;
    void * FUNC_2C;
    void * FUNC_30;
    void * FUNC_34;
    void * FUNC_38;
    PlayerUpdateState_func UpdateState;
} PlayerVTable;


/*
 * NAME :		playerGetAll
 * 
 * DESCRIPTION :
 * 			Returns a pointer to an array of Player object pointers.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ Player ** playerGetAll(void);

/*
 * NAME :		playerSetWeapon
 * 
 * DESCRIPTION :
 * 			Change player's equipped weapon.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      player      :           Pointer to player data struct
 *      weaponId    :           Weapon id to set
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void playerSetWeapon(Player * player, int weaponId);

/*
 * NAME :		playerGetWeaponData
 * 
 * DESCRIPTION :
 * 			Gets a pointer to the given player's weapon data struct.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      playerId      :           Player index.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ PlayerWeaponData * playerGetWeaponData(int playerId);

/*
 * NAME :		playerSetLocalEquipslot
 * 
 * DESCRIPTION :
 * 			Set's the given local player's equip slot with the given weapon id.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      localPlayerId      :           Local player index.
 *      
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void playerSetLocalEquipslot(int localPlayerId, int slot, int weaponId);

/*
 * NAME :		playerSetTeam
 * 
 * DESCRIPTION :
 * 			Change player's equipped weapon.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      player      :           Pointer to player data struct
 *      teamId    :             Team id to set
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void playerSetTeam(Player * player, int teamId);

/*
 * NAME :		playerIsLocal
 * 
 * DESCRIPTION :
 * 			Whether or not the given player is local or remote.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      player      :           Target player.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int playerIsLocal(Player * player);

/*
 * NAME :		playerIdIsLocal
 * 
 * DESCRIPTION :
 * 			Whether or not the given player id is local or remote.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      player      :           Target player id.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int playerIdIsLocal(int playerId);

/*
 * NAME :		playerGetNumLocals
 * 
 * DESCRIPTION :
 * 			Number of locals the client has.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int playerGetNumLocals(void);

/*
 * NAME :		playerGiveWeapon
 * 
 * DESCRIPTION :
 * 			Converts a WEAPON_SLOT_INDEX to the respective WEAPON_IDS
 * 
 * NOTES :
 * 
 * ARGS : 
 *      player      :           Target player.
 *      weaponId    :           ID of weapon to give.
 *      weaponLevel :           Level of weapon.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void playerGiveWeapon(Player * player, int weaponId, int weaponLevel);

/*
 * NAME :		playerRespawn
 * 
 * DESCRIPTION :
 * 			Respawns the given player.
 * 
 * NOTES :
 *          Spawn point is determined internally.
 *          This will freeze on CQ if the player hasn't picked a node to respawn to.
 * 
 * ARGS : 
 *      player      :           Target player.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void playerRespawn(Player * player);

/*
 * NAME :		playerIncHealth
 * 
 * DESCRIPTION :
 * 			
 * 
 * NOTES :
 * 
 * 
 * ARGS : 
 *      player      :           Target player.
 * 			health			:						Target health.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void playerIncHealth(Player * player, float health);

/*
 * NAME :		playerDecHealth
 * 
 * DESCRIPTION :
 * 			
 * 
 * NOTES :
 * 
 * 
 * ARGS : 
 *      player      :           Target player.
 * 			health			:						Target health.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void playerDecHealth(Player * player, float health);

/*
 * NAME :		playerSetHealth
 * 
 * DESCRIPTION :
 * 			
 * 
 * NOTES :
 * 
 * 
 * ARGS : 
 *      player      :           Target player.
 * 			health			:						Target health.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void playerSetHealth(Player * player, float health);

/*
 * NAME :		playerDropFlag
 * 
 * DESCRIPTION :
 * 			Causes the player to drop the flag.
 * 
 * NOTES :
 * 
 * 
 * ARGS : 
 *      player      :           Target player.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void playerDropFlag(Player * player, int a1);

/*
 * NAME :		playerIsDead
 * 
 * DESCRIPTION :
 * 			Returns non-zero if the given player is dead.
 * 
 * NOTES :
 * 
 * 
 * ARGS : 
 *      player      :           Target player.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int playerIsDead(Player * player);

/*
 * NAME :		playerSetPosRot
 * 
 * DESCRIPTION :
 * 			Sets a given player's position and rotation.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      player      :           Target player.
 *      p           :           Position.
 *      r           :           Rotation.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ void playerSetPosRot(Player * player, VECTOR p, VECTOR r);

/*
 * NAME :		playerGetPad
 * 
 * DESCRIPTION :
 * 			Returns a pointer to the player's pad data.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          player:                     Target player.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ PadButtonStatus * playerGetPad(Player * player);

/*
 * NAME :		playerPadGetButton
 * 
 * DESCRIPTION :
 * 			Returns 1 when the given player is pressing the given button combination.
 *          Returns negative on failure.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          player:                     Pointer to player's player object.
 *          buttonMask:                 Buttons to check.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int playerPadGetButton(Player * player, u16 buttonMask);

/*
 * NAME :		playerPadGetButtonDown
 * 
 * DESCRIPTION :
 * 			Returns 1 during the frame that the given player starts pressing the given button combination.
 *          Returns negative on failure.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          player:                     Pointer to player's player object.
 *          buttonMask:                 Buttons to check.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int playerPadGetButtonDown(Player * player, u16 buttonMask);

/*
 * NAME :		playerPadGetButtonUp
 * 
 * DESCRIPTION :
 * 			Returns 1 during the frame that the given player releases the given button combination.
 *          Returns negative on failure.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          player:                     Pointer to player's player object.
 *          buttonMask:                 Buttons to check.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int playerPadGetButtonUp(Player * player, u16 buttonMask);

/*
 * NAME :		playerGetVTable
 * 
 * DESCRIPTION :
 * 			Returns pointer to the given player's vtable.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          player:                     Pointer to player's player object.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ PlayerVTable* playerGetVTable(Player * player);

/*
 * NAME :		playerGetFromUID
 * 
 * DESCRIPTION :
 * 			Returns pointer to the player with the given UID.
 * 			Returns NULL if not found.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          uid:                     	Player UID.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
Player * playerGetFromUID(int uid);

#endif // _LIBDL_PLAYER_H_
