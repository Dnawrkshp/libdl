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
 * NAME :		gameGetRespawnTime
 * 
 * DESCRIPTION :
 * 			Gets the game's respawn timer setting.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ u8 gameGetRespawnTime(void);

/*
 * NAME :		gameSetRespawnTime
 * 
 * DESCRIPTION :
 * 			Sets the game's respawn timer setting.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void gameSetRespawnTime(u8 seconds);

/*
 * NAME :		gameGetTimeLimit
 * 
 * DESCRIPTION :
 * 			Gets the game's time limit in minutes.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ u8 gameGetTimeLimit(void);

/*
 * NAME :		gameSetTimeLimit
 * 
 * DESCRIPTION :
 * 			Sets the game's time limit in minutes.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void gameSetTimeLimit(u8 minutes);

/*
 * NAME :		gameGetSurvivor
 * 
 * DESCRIPTION :
 * 			Gets the game's survivor flag (no respawning)
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ u8 gameGetSurvivor(void);

/*
 * NAME :		gameSetSurvivor
 * 
 * DESCRIPTION :
 * 			Sets the game's survivor flag (no respawning)
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void gameSetSurvivor(u8 survivor);

/*
 * NAME :		gameGetKillsToWin
 * 
 * DESCRIPTION :
 * 			Gets the game's kills to win target.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ u8 gameGetKillsToWin(void);

/*
 * NAME :		gameSetKillsToWin
 * 
 * DESCRIPTION :
 * 			Sets the game's kills to win target.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void gameSetKillsToWin(u8 kills);

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
