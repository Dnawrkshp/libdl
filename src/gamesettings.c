#include <tamtypes.h>
#include "gamesettings.h"
#include "math.h"
#include "help.h"


/*
 * Points to the active game settings.
 */
#define GLOBAL_GAMESETTINGS			            ((GameSettings*)(*(u32*)0x0021DFE8))


/*
 * Points to the active game options.
 */
#define GLOBAL_GAMEOPTIONS			            ((GameOptions*)(*(u32*)0x0021DFF0))

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

//--------------------------------------------------------
GameSettings * gameGetSettings(void)
{
    return GLOBAL_GAMESETTINGS;
}

//--------------------------------------------------------
GameOptions * gameGetOptions(void)
{
    return GLOBAL_GAMEOPTIONS;
}

//--------------------------------------------------------
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

//--------------------------------------------------------
char * gameGetGameModeName(int modeId)
{
  switch (modeId)
  {
      case GAMERULE_CQ: return helpGetString(HELP_STRING_ID_CONQUEST);
      case GAMERULE_CTF: return helpGetString(HELP_STRING_ID_CTF);
      case GAMERULE_DM: return helpGetString(HELP_STRING_ID_DEATHMATCH);
      case GAMERULE_JUGGY: return helpGetString(HELP_STRING_ID_JUGGERNAUT);
      case GAMERULE_KOTH: return helpGetString(HELP_STRING_ID_KING_OF_THE_HILL);
      default: return helpGetString(-1);
  }
}
