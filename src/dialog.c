#include "game.h"
#include "dialog.h"

void internal_dialogPlaySound_inGame(u64, u64, u64, u64, float, float, float, float);
void internal_dialogPlaySound_inLobby(u64, u64);

/*
 * NAME :		dialogPlaySound
 * 
 * DESCRIPTION :
 * 			Plays the given dialog sound.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          dialogId:           Dialog sound id.
 *          arg2    :           No idea.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void dialogPlaySound(int dialogId, int arg2)
{
    if (gameIsIn())
    {
        internal_dialogPlaySound_inGame(dialogId, arg2, 2, 0, 0, 1, 0, 64);
    }
    else
    {
        internal_dialogPlaySound_inLobby(dialogId, arg2);
    }
}
