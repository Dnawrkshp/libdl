#include <tamtypes.h>
#include "gamesettings.h"
#include "math.h"


/*
 * Points to the active game settings.
 */
#define GLOBAL_GAMESETTINGS			            ((GameSettings*)(*(u32*)0x0021DFE8))



/*
 *
 */
#define GAME_TIMELIMT_MINUTES                   (*(u8*)0x002126D0)

/*
 *
 */
#define GAME_KILLS_TO_WIN                       (*(u8*)0x002126D1)

/*
 *
 */
#define GAME_SURVIVOR                           (*(u8*)0x002126D6)

/*
 *
 */
#define GAME_RESPAWN_TIME                       (*(u8*)0x002126DC)

/*
 * Location of where flag pickup square distance is defined.
 * This is an instruction: lui at, 0x4080
 * We should only edit the lower 16 bits with the upper 16 bits of our target float value.
 */
#define GAME_FLAG_PICKUP_SQRDISTANCE            (0x00418A84)

GameSettings * gameGetSettings(void)
{
    return GLOBAL_GAMESETTINGS;
}

u8 gameGetRespawnTime(void)
{
    return GAME_RESPAWN_TIME;
}

void gameSetRespawnTime(u8 seconds)
{
    GAME_RESPAWN_TIME = seconds;
}

u8 gameGetTimeLimit(void)
{
    return GAME_TIMELIMT_MINUTES;
}

void gameSetTimeLimit(u8 minutes)
{
    GAME_TIMELIMT_MINUTES = minutes;
}

u8 getGameSurvivor(void)
{
    return GAME_SURVIVOR;
}

void gameSetSurvivor(u8 survivor)
{
    GAME_SURVIVOR = survivor;
}

u8 gameGetKillsToWin(void)
{
    return GAME_KILLS_TO_WIN;
}

void gameSetKillsToWin(u8 kills)
{
    GAME_KILLS_TO_WIN = kills;
}

void gameFlagSetPickupDistance(float distance)
{
    // We're actually setting the square distance
    asm __volatile(
        "mul.s $f12, $f12, $f12\n"
        "mfc1 $v0, $f12\n"
        "srl $v0, $v0, 16\n"
        "sh $v0, %0"
        : : "i" (GAME_FLAG_PICKUP_SQRDISTANCE)
    );
}
