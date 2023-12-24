#include "game.h"


void internal_gameEnd(int);

/*
 * 
 */
#define ACTIVE_LEVEL_ID                     (*(int*)0x0021DE10)
#define GAME_ACTIVE                         (*(int*)0x0021E1EC)
#define SCENE_LOADED                        (*(int*)0x0022026C)

/*
 * When non-zero start menu is open in-game.
 */
#define GAME_START_MENU_OPEN                ((int*)0x002F9EA0)

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
#define GAME_WINNER_TEAM_ID2                (*(int*)0x001E0D94)

/*
 * Player id of the winner. Set to -1 for team win.
 */
#define GAME_WINNER_PLAYER_ID               (*(int*)0x0036D614)
#define GAME_WINNER_PLAYER_ID2              (*(int*)0x001E0D98)

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
 * Id of the game host.
 */
#define GAME_HOST_ID                        (*(u8*)0x001723B4)

/*
 * Id of the current client.
 */
#define GAME_CLIENT_ID                        (*(u8*)0x00172170)


/*
 * Account id of the current client.
 */
#define GAME_ACCOUNT_ID                        (*(int*)0x00172194)

/*
 *
 */
#define GAME_DATA                           ((GameData*)0x0036D600)

/*
 * Array of round trip time divided by 2.
 */
#define GAME_PING_ARRAY                     ((int*)0x001B2420)
#define GAME_PING_CURRENT_INDEX             (*(int*)0x001B25B4)

void gameSetWinner(int teamOrPlayerId, int isTeam)
{
  GAME_WINNER_TEAM_ID2 = GAME_WINNER_TEAM_ID = teamOrPlayerId;
  GAME_WINNER_PLAYER_ID2 = GAME_WINNER_PLAYER_ID = isTeam ? -1 : teamOrPlayerId;
}

void gameEnd(int reason)
{
    if (!gameHasEnded())
        internal_gameEnd(reason);
}

int gameIsHost(int hostId)
{
    return hostId == GAME_HOST_ID;
}

int gameAmIHost(void)
{
    return GAME_CLIENT_ID == GAME_HOST_ID;
}

int gameGetHostId(void)
{
    return GAME_HOST_ID;
}

int gameGetMyClientId(void)
{
    return GAME_CLIENT_ID;
}

int gameGetMyAccountId(void)
{
    return GAME_ACCOUNT_ID;
}

int isInGame(void)
{
    return GAME_ACTIVE && SCENE_LOADED == 1;
}

int isInMenus(void)
{
    return ACTIVE_LEVEL_ID == 0 && SCENE_LOADED == 1;
}

int isSceneLoading(void)
{
    return SCENE_LOADED != 1;
}

int gameIsStartMenuOpen(int localPlayerIndex)
{
    return GAME_START_MENU_OPEN[localPlayerIndex * 15];
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

int gameGetRawTimeLimit(void)
{
    return GAME_TIME_LIMIT;
}

GameData* gameGetData(void)
{
    return GAME_DATA;
}

int gameGetPing(void)
{
    int lastIndex = GAME_PING_CURRENT_INDEX - 1;
    if (lastIndex < 0)
        lastIndex = 0x63;
    return GAME_PING_ARRAY[lastIndex] * 2;
}
