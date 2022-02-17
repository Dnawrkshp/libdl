/***************************************************
 * FILENAME :		weapon.h
 * 
 * DESCRIPTION :
 * 		Contains weapon specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 		Each offset is determined per app id.
 * 		This is to ensure compatibility between versions of Deadlocked/Gladiator.
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_WEAPON_H_
#define _LIBDL_WEAPON_H_

#include "common.h"
#include "math3d.h"

/*
 *
 */
struct tNW_GadgetEventMessage
{
	/*   0 */ short int GadgetId;
	/*   2 */ char PlayerIndex;
	/*   3 */ char GadgetEventType;
	/*   4 */ char ExtraData;
	/*   8 */ int ActiveTime;
	/*   c */ unsigned int TargetUID;
	/*  10 */ float FiringLoc[3];
	/*  1c */ float TargetDir[3];
};

/*
 *
 */
typedef struct GadgetEvent
{
	/*   0 */ unsigned char gadgetID;
	/*   1 */ unsigned char cPlayerIndex;
	/*   2 */ char cGadgetType;
	/*   3 */ char gadgetEventType;
	/*   4 */ int iActiveTime;
	/*   8 */ unsigned int targetUID;
	/*  10 */ VECTOR targetOffsetQuat;
	/*  20 */ struct GadgetEvent* pNextGadgetEvent;
	/*  24 */ struct tNW_GadgetEventMessage gadgetEventMsg;
} GadgetEvent;

/*
 *
 */
typedef struct GadgetEntry
{
    short Level;
    short Ammo;
    int Experience;
    int GameTimeLastShot;
    int OmegaMod;
    int UNK_10;
    int AlphaMods[10];
    char UNK_3C[0x08];
} GadgetEntry;

/*
 *
 */
typedef struct GadgetBox
{
	/*   0 */ char Initialized;
	/*   1 */ char Level;
	/*   2 */ char bButtonDown[10];
	/*   c */ short int ButtonUpFrames[10];
	/*  20 */ char NumGadgetEvents;
	/*  21 */ char ModBasic[8];
	/*  2a */ short int ModPostFX;
	/*  2c */ struct GadgetEvent* NextGadgetEvent;
	/*  30 */ struct GadgetEvent GadgetEventSlots[32];
	/* a30 */ struct GadgetEntry Gadgets[32];
} GadgetBox;

/*
 *
 */
typedef struct GadgetDefsEntry
{
    int LevelId;
    int LevelUpExperience;
    int MpLevelUpExperience;
    int padding;
    float Damage[4];
} GadgetDefsEntry;

/*
 *
 */
typedef struct WeaponDefsData
{
    GadgetDefsEntry Entries[10];
} WeaponDefsData;

/*
 *
 */
typedef struct WrenchDefsData
{
    GadgetDefsEntry Entries[8];
} WrenchDefsData;

/*
 * NAME :		WEAPON_IDS
 * 
 * DESCRIPTION :
 * 			Defines the value for each weapon id.
 * 
 * NOTES :
 *          
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
enum WEAPON_IDS
{
    WEAPON_ID_EMPTY =               0,
    WEAPON_ID_WRENCH =              1,
    WEAPON_ID_VIPERS =              2,
    WEAPON_ID_MAGMA_CANNON =        3,
    WEAPON_ID_ARBITER =             4,
    WEAPON_ID_FUSION_RIFLE =        5,
    WEAPON_ID_MINE_LAUNCHER =       6,
    WEAPON_ID_B6 =                  7,
    WEAPON_ID_OMNI_SHIELD =         8,
    WEAPON_ID_EMP =                 12,
    WEAPON_ID_HACKER_RAY =          13,
    WEAPON_ID_SWINGSHOT =           14,
    WEAPON_ID_FLAIL =               15
};

/*
 * NAME :		WEAPON_SLOT_INDEX
 * 
 * DESCRIPTION :
 * 			Defines the equip slot index for each weapon.
 * 
 * NOTES :
 *          
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
enum WEAPON_SLOT_INDEX
{
    WEAPON_SLOT_WRENCH =              0,
    WEAPON_SLOT_VIPERS =              1,
    WEAPON_SLOT_MAGMA_CANNON =        2,
    WEAPON_SLOT_ARBITER =             3,
    WEAPON_SLOT_FUSION_RIFLE =        4,
    WEAPON_SLOT_MINE_LAUNCHER =       5,
    WEAPON_SLOT_B6 =                  6,
    WEAPON_SLOT_FLAIL =               7,
    WEAPON_SLOT_OMNI_SHIELD =         8
};

/*
 * NAME :		ALPHA_MOD_IDS
 * 
 * DESCRIPTION :
 * 			Defines the value for each alpha mod.
 * 
 * NOTES :
 *          
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
enum ALPHA_MOD_IDS
{
    ALPHA_MOD_EMPTY =                   0,
    ALPHA_MOD_SPEED =                   1,
    ALPHA_MOD_AMMO =                    2,
    ALPHA_MOD_AIMING =                  3,
    ALPHA_MOD_IMPACT =                  4,
    ALPHA_MOD_AREA =                    5,
    ALPHA_MOD_XP =                      6,
    ALPHA_MOD_JACKPOT =                 7,
    ALPHA_MOD_NANOLEECH =               8,
};

/*
 * NAME :		OMEGA_MOD_IDS
 * 
 * DESCRIPTION :
 * 			Defines the value for each omega mod.
 * 
 * NOTES :
 *          
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
enum OMEGA_MOD_IDS
{
    OMEGA_MOD_EMPTY =                   0,
    OMEGA_MOD_NAPALM =                  1,
    OMEGA_MOD_TIME_BOMB =               2,
    OMEGA_MOD_FREEZE =                  3,
    OMEGA_MOD_MINI_BOMB =               4,
    OMEGA_MOD_MORPH =                   5,
    OMEGA_MOD_BRAINWASH =               6,
    OMEGA_MOD_ACID =                    7,
    OMEGA_MOD_SHOCK =                   8,
};

/*
 * NAME :		weaponGetGunLevelDefs
 * 
 * DESCRIPTION :
 * 			Returns pointer to array of weapon level definitions starting at dual vipers.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      slotId      :           Slot index.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
WeaponDefsData* weaponGetGunLevelDefs(void);

/*
 * NAME :		weaponGetFlailLevelDefs
 * 
 * DESCRIPTION :
 * 			Returns pointer to block of flail level definitions.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      slotId      :           Slot index.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
WeaponDefsData* weaponGetFlailLevelDefs(void);

/*
 * NAME :		weaponGetWrenchLevelDefs
 * 
 * DESCRIPTION :
 * 			Returns pointer to block of wrench level definitions.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      slotId      :           Slot index.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
WrenchDefsData* weaponGetWrenchLevelDefs(void);

/*
 * NAME :		weaponSlotToId
 * 
 * DESCRIPTION :
 * 			Converts a WEAPON_SLOT_INDEX to the respective WEAPON_IDS
 * 
 * NOTES :
 * 
 * ARGS : 
 *      slotId      :           Slot index.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int weaponSlotToId(int slotId);

/*
 * NAME :		weaponIdToSlot
 * 
 * DESCRIPTION :
 * 			Converts a WEAPON_IDS to the respective WEAPON_SLOT_INDEX
 * 
 * NOTES :
 * 
 * ARGS : 
 *      id      :               Weapon id.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int weaponIdToSlot(int id);

/*
 * NAME :		weaponSetDamage
 * 
 * DESCRIPTION :
 * 			Sets the damage of the given weapon at the given level.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      weaponId        :           Target weapon.
 *      level           :           Target weapon level.
 *      damage          :           Target damage.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void weaponSetDamage(int weaponId, int level, float damage);

/*
 * NAME :		weaponTurnOnHoloshields
 * 
 * DESCRIPTION :
 * 			Enables holoshields for use in collision detection.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void weaponTurnOnHoloshields(int team);

/*
 * NAME :		weaponTurnOffHoloshields
 * 
 * DESCRIPTION :
 * 			Disables holoshields for use in collision detection.
 * 
 * NOTES :
 *          Always call this after you are done using weaponTurnOnHoloshields().
 * 
 * ARGS : 
 *      weaponId        :           Target weapon.
 *      level           :           Target weapon level.
 *      damage          :           Target damage.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void weaponTurnOffHoloshields(void);

#endif // _LIBDL_WEAPON_H_
