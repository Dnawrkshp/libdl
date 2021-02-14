#include "game.h"


void internal_gameEnd(int);

/*
 * 
 */
#define GAME_ACTIVE                         (*(int*)0x0021E1EC)
#define SCENE_LOADED                        (*(int*)0x0022026C)

/*
 * How many milliseconds for the game to last.
 * Negative if no time limit.
 */
#define GAME_TIME_LIMIT                     (*(int*)0x0036D600)

#define GAME_START_TIME                     (*(int*)0x0036D604)

/*
 * Game winner team id.
 */
#define GAME_WINNER_TEAM_ID                 (*(int*)0x0036D610)

/*
 * Player id of the winner. Set to -1 for team win.
 */
#define GAME_WINNER_PLAYER_ID               (*(int*)0x0036D614)

/*
 * Time (ms) that the game ended.
 */
#define GAME_TIME_ENDGAME                   (*(u32*)0x0036D664)

/*
 * Whether or not the game has ended.
 */
#define GAME_HAS_ENDED                      (GAME_TIME_ENDGAME > 0)

/*
 * Game time (ms).
 */
#define GAME_TIME                           (*(int*)0x00172378)

/*
 * 
 */
#define GAME_DEATH_BARRIER_Y                (*(float*)0x0022267C)

/*
 * 
 */
#define GAME_PLAYER_STATS_ARRAY             ((PlayerGameStats*)0x0036D9C8)

/*
 *
 */
#define GAME_TEAM_CAPS_ARRAY                ((u8*)0x0036DC4C)

/*
 * 
 */
#define PLAYER_WEAPON_STATS_ARRAY           ((PlayerWeaponStats*)0x0036D6A8)

/*
 * When non-zero, it refreshes the in-game scoreboard.
 */
#define GAME_SCOREBOARD_REFRESH_FLAG        (*(u32*)0x00310248)

/*
 * Target scoreboard value.
 */
#define GAME_SCOREBOARD_TARGET              (*(u32*)0x002FA084)

/*
 * Collection of scoreboard items.
 */
#define GAME_SCOREBOARD_ARRAY               ((ScoreboardItem**)0x002FA04C)

/*
 * Number of items in the scoreboard.
 */
#define GAME_SCOREBOARD_ITEM_COUNT          (*(u32*)0x002F9FCC)

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
void setWinner(int teamOrPlayerId, int isTeam)
{
    GAME_WINNER_TEAM_ID = teamOrPlayerId;
    GAME_WINNER_PLAYER_ID = isTeam ? -1 : teamOrPlayerId;
}

void gameEnd(int reason)
{
    if (!gameHasEnded())
        internal_gameEnd(reason);
}

int gameIsIn(void)
{
    return GAME_ACTIVE && SCENE_LOADED == 1;
    
    if (!GAME_ACTIVE || SCENE_LOADED != 1)
        return 0;

    GameSettings * gs = gameGetSettings();
    if (!gs)
        return 0;

    return gameGetTime() >= gs->GameStartTime;
}

int gameHasEnded(void)
{
    return GAME_HAS_ENDED;
}

int gameGetTime(void)
{
    return GAME_TIME;
}

int gameGetFinishedExitTime(void)
{
    return GAME_TIME_ENDGAME;
}

float gameGetDeathHeight(void)
{
    return GAME_DEATH_BARRIER_Y;
}

void gameSetDeathHeight(float height)
{
    GAME_DEATH_BARRIER_Y = height;
}

PlayerGameStats * gameGetPlayerStats(void)
{
    return GAME_PLAYER_STATS_ARRAY;
}

u8 * gameGetTeamStatCaps(void)
{
    return GAME_TEAM_CAPS_ARRAY;
}

PlayerWeaponStats * gameGetPlayerWeaponStats(void)
{
    return PLAYER_WEAPON_STATS_ARRAY;
}

int gameGetRawTimeLimit(void)
{
    return GAME_TIME_LIMIT;
}
