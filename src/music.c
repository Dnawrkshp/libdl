#include "game.h"
#include "music.h"

//--------------------------------------------------------
void internal_musicPlayTrack_inGame(u64, u64, u64);
void internal_musicPlayTrack_inLobby(u64, u64, u64);
void internal_musicStopTrack_inGame(void);
void internal_musicStopTrack_inLobby(void);
void internal_musicPauseTrack_inGame(u64);
void internal_musicPauseTrack_inLobby(u64);
void internal_musicUnpauseTrack_inGame(void);
void internal_musicUnpauseTrack_inLobby(void);
void internal_musicTransitionTrack_inGame(u64, u64, u64, u64);
void internal_musicTransitionTrack_inLobby(u64, u64, u64, u64);
void internal_wadGetSectors(u64, u64, u64);

/*
 * Games music volume setting.
 */
#define MUSIC_VOLUME (*(u32*)0x00171D44)

/*
 * This is what is used to figure out where to load the tracks from.
 */
#define MUSIC_LOCATION (*(u32*)0x001CF85C)

/*
 * Defines which track to start on.
 */
#define TRACK_RANGE_MIN (*(u8*)0x0021EC08)

/*
 * How many tracks to play, starting at TRACK_RANGE_MIN
 */
#define TRACK_RANGE_MAX (*(u8*)0x0021EC0C)

#define CURRENT_TRACK (*(u16*)0x00206990)

/*
 * how long the track is.
 * Counts down to 0.  If 0, track is done playing.
 * if 0xBB80, game is loading next track.
 */
#define TRACK_DURATION (*(u32*)0x002069A4)

//--------------------------------------------------------------------------------
void musicPlayTrack(int TrackNumber, int KeepPlaying)
{
    musicStopTrack();
    if (gameIsIn())
    {
        internal_musicPlayTrack_inGame(TrackNumber * 2, KeepPlaying, 0x400);
    }
    else
    {
        internal_musicPlayTrack_inLobby(TrackNumber * 2, KeepPlaying, 0x400);
    }
}

//--------------------------------------------------------------------------------
void musicStopTrack(void)
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

//--------------------------------------------------------------------------------
void musicPauseTrack(int arg1)
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

//--------------------------------------------------------------------------------
void musicUnpauseTrack(void)
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

//--------------------------------------------------------------------------------
void musicTransitionTrack(short arg1, short CueTrack, short arg3, short arg4)
{
    if (gameIsIn())
    {
        internal_musicTransitionTrack_inGame(arg1, CueTrack * 2, arg3, arg4);
    }
    else
    {
        internal_musicTransitionTrack_inLobby(arg1, CueTrack * 2, arg3, arg4);
    }
}

//--------------------------------------------------------------------------------
int musicIsLoaded(void)
{
  return MUSIC_LOCATION == 0xF8D29;
}
