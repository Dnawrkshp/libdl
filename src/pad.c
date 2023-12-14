#include "string.h"
#include "pad.h"
#include "game.h"
#include "player.h"

#define PAD_POINTER                         ((struct PAD**)0x0021ddd8)
#define PAD_P0                              ((struct PAD*)0x001EE600)
#define PAD_PROCESS_ADDR                    (*(u32*)0x00718930)
#define PAD_PROCESS_VALUE                   (0x0C1C61DA)

// Default value for pad history
const PadHistory DefaultPadHistory = {
    0xFFFF,
    0x7F,
    0x7F,
    0x7F,
    0x7F,
    -1
};

// Local pad history
PadHistory LocalPadHistory[GAME_MAX_LOCALS];

/*
 * NAME :    padGetPad
 * 
 * DESCRIPTION :
 *       Returns a pointer to the respective local player's pad struct.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
struct PAD* padGetPad(int localPlayerIdx)
{
  if (localPlayerIdx < 0 || localPlayerIdx >= GAME_MAX_LOCALS) return NULL;

  struct PAD* pad = PAD_POINTER[localPlayerIdx];

  // if the pad pointers haven't been configured yet
  // and we're looking for player 0
  // return pad address for player 0 (this never changes)
  if (!pad && !localPlayerIdx) return PAD_P0;

  return pad;
}

/*
 * NAME :    padUpdate
 * 
 * DESCRIPTION :
 *       Processes pad state, registering when a button is pressed and released.
 * 
 * NOTES :
 *          This must be called every tick in order for pad functionality to work.
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void padUpdate(void)
{
  int i;

  for (i = 0; i < GAME_MAX_LOCALS; ++i) {
    struct PAD* pad = padGetPad(i);
    if (pad) {
      memcpy(&LocalPadHistory[i], &pad->rdata[2], 6);
    } else {
      memcpy(&LocalPadHistory[i], &DefaultPadHistory, sizeof(PadHistory));
    }
  }
}

/*
 * NAME :    padGetButton
 * 
 * DESCRIPTION :
 *       Returns 1 when the user is pressing the given button combination.
 *          Returns negative on failure.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          localPlayerIndex:           Which local player's controller to read.
 *          buttonMask:                 Buttons to check.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int padGetButton(int localPlayerIndex, u16 buttonMask)
{
  struct PAD* pad = padGetPad(localPlayerIndex);
  if (pad) {
    u16 btns = *(u16*)&pad->rdata[2];
    return (btns & buttonMask) == 0;
  }

  return -1;
}

/*
 * NAME :    padGetButtonDown
 * 
 * DESCRIPTION :
 *       Returns 1 during the frame that the user starts pressing the given button combination.
 *          Returns negative on failure.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          localPlayerIndex:           Which local player's controller to read.
 *          buttonMask:                 Buttons to check.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int padGetButtonDown(int localPlayerIndex, u16 buttonMask)
{
  if (localPlayerIndex < 0 || localPlayerIndex >= GAME_MAX_LOCALS)
    return -1;

  return padGetButton(localPlayerIndex, buttonMask) &&
    (LocalPadHistory[localPlayerIndex].btns & buttonMask) != 0;
}

/*
 * NAME :    padGetButtonUp
 * 
 * DESCRIPTION :
 *       Returns 1 during the frame that the user releases the given button combination.
 *          Returns negative on failure.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          localPlayerIndex:           Which local player's controller to read.
 *          buttonMask:                 Buttons to check.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int padGetButtonUp(int localPlayerIndex, u16 buttonMask)
{
  if (localPlayerIndex < 0 || localPlayerIndex >= GAME_MAX_LOCALS)
    return -1;

  return !padGetButton(localPlayerIndex, buttonMask) &&
    (LocalPadHistory[localPlayerIndex].btns & buttonMask) == 0;
}

/*
 * NAME :    padResetInput
 * 
 * DESCRIPTION :
 *       Resets the given ports inputs.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          localPlayerIndex:           Which local player's controller to read.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void padResetInput(int localPlayerIndex)
{
    if (localPlayerIndex < 0 || localPlayerIndex >= GAME_MAX_LOCALS)
        return;

    struct PAD* pad = padGetPad(localPlayerIndex);
    if (!pad) return;

    u64 defaultValue = 0x7F7F7F7FFFFF7900;
    memcpy(&pad->rdata[2], &defaultValue, 8);
    memcpy((void*)((u32)&pad->rdata[2] + 0x80), &defaultValue, 8);
}

/*
 * NAME :    padDisableInput
 * 
 * DESCRIPTION :
 *       Disables the pad input.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void padDisableInput(void)
{
  if (PAD_PROCESS_ADDR == PAD_PROCESS_VALUE)
    PAD_PROCESS_ADDR = 0;

  if (isInGame())
  {
    // no input timer
    *(u16*)(0x00347AA0 + 0x3BA) = 0x7FFF;

    // no cam
    *(u16*)(0x00347AA0 + 0x402) = 0x7FFF;
  }
}

/*
 * NAME :    padEnableInput
 * 
 * DESCRIPTION :
 *       Enables the pad input.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void padEnableInput(void)
{
  PAD_PROCESS_ADDR = PAD_PROCESS_VALUE;

  if (isInGame())
  {
    // no input timer
    *(u16*)(0x00347AA0 + 0x3BA) = 0;

    // no cam
    *(u16*)(0x00347AA0 + 0x402) = 0;
  }
}
