/***************************************************
 * FILENAME :		gamesettings.h
 * 
 * DESCRIPTION :
 * 		Contains lobby specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 		Each offset is determined per app id.
 * 		This is to ensure compatibility between versions of Deadlocked/Gladiator.
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_GAMESETTINGS_H_
#define _LIBDL_GAMESETTINGS_H_

#include <tamtypes.h>
#include "common.h"

/*
 * Maximum number of players in a game.
 */
#define GAME_MAX_PLAYERS                (10)

/*
 *
 */
enum GameRuleIds
{
    GAMERULE_CQ,
    GAMERULE_CTF,
    GAMERULE_DM,
    GAMERULE_KOTH,
    GAMERULE_JUGGY
};

/*
 * NAME :		GameSettings
 * 
 * DESCRIPTION :
 * 			Contains the lobby's game settings.
 * 
 * NOTES :
 * 
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
typedef struct GameSettings
{
    // 
    char PlayerNames[GAME_MAX_PLAYERS][16];

    // 
    char PlayerClanTags[GAME_MAX_PLAYERS][8];

    //
    char PlayerSkins[GAME_MAX_PLAYERS];

    // 
    char PlayerTeams[GAME_MAX_PLAYERS];

    // 
    char PlayerClients[GAME_MAX_PLAYERS];

    // 
    char PlayerStates[GAME_MAX_PLAYERS];

    // 
    int UNK_118;

    // 
    char UNK_11C[8];

    //
    float PlayerRanks[GAME_MAX_PLAYERS];

    //
    float PlayerRankDeviations[GAME_MAX_PLAYERS];

    //
    int PlayerAccountIds[GAME_MAX_PLAYERS];

    //
    int GameStartTime;

    //
    int GameLoadStartTime;

    //
    short GameLevel;

    // 
    char PlayerCount;

    // 
    char SuperCheat;

    // 
    char PlayerCountAtStart;

    // 
    char GameRules;

    // 
    char GameType;

    // 
    short PlayerHeadset;

    // 
    char PlayerNamesOn;

    //
    char TeamSpawnPointIds[GAME_MAX_PLAYERS];

    // 
    u32 SpawnSeed;

} GameSettings;

/*
 * NAME :		GameOptions
 * 
 * DESCRIPTION :
 * 			Contains the game options.
 * 
 * NOTES :
 * 
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
typedef struct GameOptions
{
    union {
        struct {
            char Puma : 8;
            char Hovership : 8;
            char Hoverbike : 8;
            char Landstalker : 8;
            char Vehicles2 : 8;     // idk what this does but it always matches Vehicles
            char Vehicles : 8;
            char UNK_06 : 8;
            char UNK_07 : 8;
            char UNK_08 : 8;
            char UNK_09 : 8;
            char Homenodes : 8;
            char UNK_0B : 8;
            char UNK_0C : 8;
            char UNK_0D : 8;
            char UNK_0E : 8;
            char UNK_0F : 8;
            char UNK_10 : 8;
            char UNK_11 : 8;
            char UNK_12 : 8;
            char UNK_13 : 8;
            char UNK_14 : 8;
            char UNK_15 : 8;
            char UNK_16 : 8;
            char UNK_17 : 8;
            char Timelimit : 8;
            char KillsToWin : 8;
            char CapsToWin : 8;
            char BoltsToWin : 8;
            char UNK_1C : 8;
            char HillTimeToWin : 8;
            char Survivor : 8;
            char SpawnWithChargeboots : 8;
            char UnlimitedAmmo : 8;
            char AutospawnWeapons : 8;
            char Teamplay : 8;
            char Lockdown : 8;
            char RespawnTime : 8;
            char UNK_25 : 8;
            char UpgradeTimer : 8;
            char UNK_27 : 8;
            char UNK_28 : 8;
            char VoteTime : 8;
            char NodeType : 8;
            char UNK_2B : 8;
            char HillMovingTime : 8;
            char HillSharing : 8;
            char HillArmor : 8;
            char SpecialPickups : 8;
            char SpecialPickupsRandom : 8;
            char RadarBlips : 8;
            char Juggernaut : 8;
            char JuggernautHealing : 8;
            char JuggernautCanInvisible : 8;        // defaults to move
            char JuggernautVisibleOnlyOnHit : 8;    // when set with JuggernautCanInvisible, visible only on hit
            char UNK_36 : 8;
            char CrazyMode : 8;
            char UNK_38 : 8;
            char FlagReturn : 8;
            char FlagVehicleCarry : 8;
        } MultiplayerGameFlags;
        char Raw[59];
    } GameFlags;
    u32 WeaponFlags;
    char PointValues[11];
    u8 UpgradeTimerMultipliers[11];
} GameOptions;

/*
 * NAME :		gameGetSettings
 * 
 * DESCRIPTION :
 * 			Returns a pointer to the active tNW_GameSettings object.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 *          Returns NULL if no lobby.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ GameSettings * gameGetSettings(void);

/*
 * NAME :		gameGetOptions
 * 
 * DESCRIPTION :
 * 			Returns a pointer to the active tNW_GameOptions object.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 *          Returns NULL if no lobby/game.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ GameOptions * gameGetOptions(void);

/*
 * NAME :		gameFlagSetPickupDistance
 * 
 * DESCRIPTION :
 * 			Sets the distance from a flag a player can pick up or save it.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void gameFlagSetPickupDistance(float distance);

#endif // _LIBDL_GAMESETTINGS_H_
