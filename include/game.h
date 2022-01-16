/***************************************************
 * FILENAME :		game.h
 * 
 * DESCRIPTION :
 * 		Contains game specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 		Each offset is determined per app id.
 * 		This is to ensure compatibility between versions of Deadlocked/Gladiator.
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_GAME_H_
#define _LIBDL_GAME_H_

#include <tamtypes.h>
#include "gamesettings.h"
#include "common.h"


//--------------------------------------------------------
typedef struct PlayerGameStats
{
    short RoadKills[GAME_MAX_PLAYERS];
    short RoadKillDeaths[GAME_MAX_PLAYERS];
    short UNK0[GAME_MAX_PLAYERS];
    short UNK1[GAME_MAX_PLAYERS];
    short Kills[GAME_MAX_PLAYERS];
    short Deaths[GAME_MAX_PLAYERS];
    short Suicides[GAME_MAX_PLAYERS];
    short UNK2[GAME_MAX_PLAYERS];
    short UNK3[GAME_MAX_PLAYERS];
    short WrenchKills[GAME_MAX_PLAYERS];
    short UNK4[GAME_MAX_PLAYERS];
    short UNK5[GAME_MAX_PLAYERS];
    char FlagsCapped[GAME_MAX_PLAYERS];
    char FlagsSaved[GAME_MAX_PLAYERS];
    float HillTime[GAME_MAX_PLAYERS];
} PlayerGameStats;

//--------------------------------------------------------
typedef struct PlayerWeaponStats
{
    u16 WeaponKills[GAME_MAX_PLAYERS][9];
    u16 WeaponDeaths[GAME_MAX_PLAYERS][9];
} PlayerWeaponStats;


//--------------------------------------------------------
typedef struct ScoreboardItem
{
    int TeamId;
    int UNK;
    int Value;
} ScoreboardItem;

//--------------------------------------------------------
typedef struct GameData
{
    int TimeEnd;
    int TimeStart;
    int GameState;
    int NumTeams;
    int WinningTeam;
    int WinningPlayer;
    int BaseHoldTime;
    int FragDisplayCount;
    char FragMsg[0x3C];
    int GameEndReceived;
    int GameEndReason;
    int GameIsOver;
    int NumNodes;
    int NumStartPlayers;
    int NumStartTeams;
    int MyTotalSquats;
    int MyTotalTimeSquatted;
    int MyTotalGangSquats;
    int TeamCaptain[GAME_MAX_PLAYERS];
    char PlayerStats[0x4D8];
    char TeamStats[0xD8];
    char AllYourBaseGameData[4];
    char CtfGameData[4];
    char DeathmatchGameData[4];
} GameData;



/*
 * NAME :		setWinner
 * 
 * DESCRIPTION :
 * 			Set the winning team/player
 * 
 * NOTES :
 * 
 * ARGS : 
 *      teamOrPlayerId      :               Team/player id to set
 *      isTeam              :               Indicates if the given the winner is a team or player.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void gameSetWinner(int teamOrPlayerId, int isTeam);

/*
 * NAME :		gameEnd
 * 
 * DESCRIPTION :
 * 			End game.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      reason :      Why the game ended.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void gameEnd(int reason);

/*
 * NAME :		gameIsIn
 * 
 * DESCRIPTION :
 * 			Whether the client is currently in a game.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int gameIsIn(void);

/*
 * NAME :		gameIsHost
 * 
 * DESCRIPTION :
 * 			Whether the given host id is the host of the game.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int gameIsHost(int hostId);

/*
 * NAME :		gameAmIHost
 * 
 * DESCRIPTION :
 * 			Whether the current client is also the game host.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int gameAmIHost(void);

/*
 * NAME :		gameGetMyClientId
 * 
 * DESCRIPTION :
 * 			Returns the current client's game/dme id.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int gameGetMyClientId(void);

/*
 * NAME :		gameHasEnded
 * 
 * DESCRIPTION :
 * 			Whether the game has ended and/or is ending.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int gameHasEnded(void);

/*
 * NAME :		gameGetTime
 * 
 * DESCRIPTION :
 * 			Gets the current game time in milliseconds.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int gameGetTime(void);

/*
 * NAME :		gameGetFinishedExitTime
 * 
 * DESCRIPTION :
 * 			Gets the time when to leave after the game has ended.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 *          Returns 0 if the game has not ended.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int gameGetFinishedExitTime(void);

/*
 * NAME :		gameGetDeathHeight
 * 
 * DESCRIPTION :
 * 			Gets the level's death height.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ float gameGetDeathHeight(void);

/*
 * NAME :		gameSetDeathHeight
 * 
 * DESCRIPTION :
 * 			Sets the level's death height.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_SETTER__ void gameSetDeathHeight(float height);

/*
 * NAME :		gameGetPlayerStats
 * 
 * DESCRIPTION :
 * 			Gets all the player stats relevant to the current game.
 * 
 * NOTES :
 *          This includes kills, deaths, suicides, hill time, flags capped, wrench kills, etc.
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ PlayerGameStats * gameGetPlayerStats(void);

/*
 * NAME :		gameGetTeamStatCaps
 * 
 * DESCRIPTION :
 * 			Returns the collection of team flag captures.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ u8 * gameGetTeamStatCaps(void);

/*
 * NAME :		gameGetPlayerWeaponStats
 * 
 * DESCRIPTION :
 * 			Gets all the player weapon stats.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ PlayerWeaponStats * gameGetPlayerWeaponStats(void);

/*
 * NAME :		gameGetRawTimeLimit
 * 
 * DESCRIPTION :
 * 			Gets the actual time limit in milliseconds.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int gameGetRawTimeLimit(void);

/*
 * NAME :		gameGetData
 * 
 * DESCRIPTION :
 * 			Gets the game data.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ GameData* gameGetData(void);

/*
 * NAME :		gameGetPing
 * 
 * DESCRIPTION :
 * 			Gets the client's current ping.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int gameGetPing(void);

#endif // _LIBDL_GAME_H_
