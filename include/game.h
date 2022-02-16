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
    short WeaponKills[GAME_MAX_PLAYERS][9];
    short WeaponDeaths[GAME_MAX_PLAYERS][9];
    short WeaponShots[GAME_MAX_PLAYERS][9];
    short WeaponShotsHitBy[GAME_MAX_PLAYERS][9];
    short UNK_02D0[GAME_MAX_PLAYERS][4];
    short RoadKills[GAME_MAX_PLAYERS];
    short RoadKillDeaths[GAME_MAX_PLAYERS];
    short UNK_0348[GAME_MAX_PLAYERS];
    short UNK_035C[GAME_MAX_PLAYERS];
    short Kills[GAME_MAX_PLAYERS];
    short Deaths[GAME_MAX_PLAYERS];
    short Suicides[GAME_MAX_PLAYERS];
    short UNK_03AC[GAME_MAX_PLAYERS];
    short UNK_03C0[GAME_MAX_PLAYERS];
    short WrenchKills[GAME_MAX_PLAYERS];
    char NodesCaptured[GAME_MAX_PLAYERS];
    char UNK_03F2[GAME_MAX_PLAYERS];
    char UNK_03FC[GAME_MAX_PLAYERS];
    char UNK_0406[GAME_MAX_PLAYERS];
    char FlagsCapped[GAME_MAX_PLAYERS];
    char FlagsSaved[GAME_MAX_PLAYERS];
    float HillTime[GAME_MAX_PLAYERS];
    char UNK_0442[GAME_MAX_PLAYERS];
    float HillTime2[GAME_MAX_PLAYERS];
    float TimeJuggernaut[GAME_MAX_PLAYERS];
    short Squats[GAME_MAX_PLAYERS];
    short VehicleSquats[GAME_MAX_PLAYERS];
    short Bolts[GAME_MAX_PLAYERS];
} PlayerGameStats;

//--------------------------------------------------------
typedef struct TeamGameStats
{
    short Bolts[GAME_MAX_PLAYERS];
    char HasNodeUpgrade1[GAME_MAX_PLAYERS];
    char HasNodeUpgrade2[GAME_MAX_PLAYERS];
    char HasNodeUpgrade3[GAME_MAX_PLAYERS];
    float UpgradeTime[GAME_MAX_PLAYERS];
    short NodesOwned[GAME_MAX_PLAYERS];
    char NodesOwned2[GAME_MAX_PLAYERS];
    int UNK_0554[GAME_MAX_PLAYERS];
    float ConquestBoltIncTimer[GAME_MAX_PLAYERS];
} TeamGameStats;

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
    PlayerGameStats PlayerStats;
    TeamGameStats TeamStats;
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
 * NAME :		gameGetHostId
 * 
 * DESCRIPTION :
 * 			Returns the current game's host's client/dme id.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int gameGetHostId(void);

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
