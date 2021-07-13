#include "game.h"
#include "music.h"

void internal_musicPlayTrack_inGame(u64, u64, u64);
void internal_musicPlayTrack_inLobby(u64, u64, u64);
void internal_musicStopTrack_inGame(void);
void internal_musicStopTrack_inLobby(void);
void internal_musicPauseTrack_inGame(u64);
void internal_musicPauseTrack_inLobby(u64);
void internal_musicUnpauseTrack_inGame(void);
void internal_musicUnpauseTrack_inLobby(void);

/*
 * NAME :		             musicPlayTrack
 * 
 * DESCRIPTION :
 * 			                 Plays the given Music Track
 * 
 * NOTES :                   In order to play a new track, the current track must finish
 *                           or be stopped with musicStopTrack.
 * 
 * ARGS : 
 *          TrackNumber:     Music track
 *          KeepPlaying:     0 = don't play another track when current is finished.
 *                           1 = play random track when current is finished.
 *          arg3       :     No Idea.  Default is 0x400.
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void dialogPlaySound(int TrackNumber, int KeepPlaying)
{
    if (gameIsIn())
    {
        internal_musicPlayTrack_inGame(TrackNumber, KeepPlaying, 0x400);
    }
    else
    {
        internal_musicPlayTrack_inLobby(TrackNumber, KeepPlaying, 0x400);
    }
}

/*
 * NAME :		             musicStopTrack
 * 
 * DESCRIPTION :
 * 			                 Stops the current Music Track
 * 
 * NOTES :
 * 
 * ARGS :                    None
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void dialogStopSound(void)
{
    if (gameIsIn())
    {
        internal_musicStopTrack_inGame();
    }
    else
    {
        internal_musicStopTrack_inLobby();
    }
}

/*
 * NAME :		             musicPauseTrack
 * 
 * DESCRIPTION :
 * 			                 Pauses the current Music Track
 * 
 * NOTES :
 * 
 * ARGS :                    arg1: No clue.
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void dialogPauseSound(int arg1)
{
    if (gameIsIn())
    {
        internal_musicPauseTrack_inGame(arg1);
    }
    else
    {
        internal_musicPauseTrack_inLobby(arg1);
    }
}

/*
 * NAME :		             musicUnpauseTrack
 * 
 * DESCRIPTION :
 * 			                 Unpauses the currently paused Music Track
 * 
 * NOTES :
 * 
 * ARGS :                    None.
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void dialogUnpauseSound(void)
{
    if (gameIsIn())
    {
        internal_musicUnpauseTrack_inGame();
    }
    else
    {
        internal_musicUnpauseTrack_inLobby();
    }
}