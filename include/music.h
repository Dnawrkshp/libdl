/***************************************************
 * FILENAME :		music.h
 * 
 * DESCRIPTION :
 * 		Contains music specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 
 * 		
 * AUTHOR :			Troy "Agent Moose" Pruitt
 */

#ifndef _LIBDL_MUSIC_H_
#define _LIBDL_MUSIC_H_

#include <tamtypes.h>
#include "common.h"

enum TrackNumbers
{
    MUSIC_TRACK_MULTIPLAYER_ONLINE_LOBBY = 0,
    MUSIC_TRACK_MULTIPLAYER_GAME_LOBBY,
    MUSIC_TRACK_MULTIPLAYER_VICTORY,
    MUSIC_TRACK_MULTIPLAYER_LOSS,
    MUSIC_TRACK_MULTIPLAYER_DREADZONE_MARAUDER_ADVANCED_QUALIFIER,
    MUSIC_TRACK_MULTIPLAYER_DREADZONE_AVENGER_TOWER_OF_POWER,
    MUSIC_TRACK_MULTIPLAYER_CATACROM_ON_THE_PROWL,
    MUSIC_TRACK_MULTIPLAYER_SARATHOS_SARATHOS_SPIRIT,
    MUSIC_TRACK_MULTIPLAYER_ORXON_NODE_OVERLOAD,
    MUSIC_TRACK_MULTIPLAYER_STYGIA_ENERGY_COLLECTOR,
    MUSIC_TRACK_MULTIPLAYER_MARAXUS_TOTAL_CONTROL,
    MUSIC_TRACK_MULTIPLAYER_GHOST_STATION_GRINDING_CHASE,
    MUSIC_TRACK_MULTIPLAYER_DREADZONE_WEST_GENERATOR,
    MUSIC_TRACK_MULTIPLAYER_DREADZONE_EAST_GENERATOR,

    // The following tracks are only available if single player music is turned on.
    MUSIC_TRACK_DREADZONE_STATION_1,
    MUSIC_TRACK_DREADZONE_STATION_2, // Duplicate
    MUSIC_TRACK_DREADZONE_TRAINING_1,
    MUSIC_TRACK_DREADZONE_MARAUDER_ADVANCED_QUALIFIER, // Duplicate
    MUSIC_TRACK_DREADZONE_GRIST_FOR_THE_MILL,
    MUSIC_TRACK_DREADZONE_AVENGER_TOWER_OF_POWER, // Duplicate
    MUSIC_TRACK_DREADZONE_AVENGER_SPEED_DEMON,
    MUSIC_TRACK_DREADZONE_ZOMBIE_ATTACK,
    MUSIC_TRACK_DREADZONE_CRUSADER_DEATH_TRAP,
    MUSIC_TRACK_DREADZONE_CRUSADER_MARATHON,
    MUSIC_TRACK_DREADZONE_HEAVY_METAL,
    MUSIC_TRACK_DREADZONE_END_ZONE,
    MUSIC_TRACK_DREADZONE_VINDICATOR_AIR_DROP,

    MUSIC_TRACK_CATACROM_VALLEY_OF_HEROES,
    MUSIC_TRACK_CATACROM_ON_THE_PROWL, // Duplicate
    MUSIC_TRACK_CATACROM_ALL_ABOARD_THE_LANDSTALKER,
    MUSIC_TRACK_CATACROM_RISE_UP,

    MUSIC_TRACK_SARATHOS_ALIEN_SOIL,
    MUSIC_TRACK_SARATHOS_SARATHOS_SPIRIT, // Duplicate
    MUSIC_TRACK_SARATHOS_WHERE_THE_LAVIATHANS_ROAM,
    MUSIC_TRACK_SARATHOS_KING_OF_THE_LEVIATHANS,

    MUSIC_TRACK_KRONOS_INFILTRATE_THE_CATHEDRAL,
    MUSIC_TRACK_KRONOS_INTRODUCING_SHELLSHOCK,
    MUSIC_TRACK_KRONOS_ENEMIES_ARE_SUCH_A_GRIND,
    MUSIC_TRACK_KRONOS_SHOWDOWN_WITH_SHELLSHOCK,

    MUSIC_TRACK_GHOST_STATION_RUNNING_THE_GAUNTLET_2, // Duplicate
    MUSIC_TRACK_SHAAR_DEATHBOWL,
    MUSIC_TRACK_SHAAR_LANDSTALKER_STALKIN_1,
    MUSIC_TRACK_SHAAR_AS_THE_WRENCH_TURNS_1,
    MUSIC_TRACK_SHAAR_FROZEN_TUNDRA,

    MUSIC_TRACK_ORXON_LABYRINTH_OF_DEATH,
    MUSIC_TRACK_ORXON_NODE_OVERLOAD, // Duplicate
    MUSIC_TRACK_ORXON_REFINERY_AMBUSH,
    MUSIC_TRACK_ORXON_CHAINS_OF_VILLAINY,

    MUSIC_TRACK_DREADZONE_TRAINING_2, // Duplicate
    MUSIC_TRACK_VALIX_LOST_AND_FOUND,
    MUSIC_TRACK_VALIX_SPACE_ACE,
    MUSIC_TRACK_VALIX_POWER_UP,
    MUSIC_TRACK_VALIX_LET_THE_LIGHT_SHINE_THROUGH,

    MUSIC_TRACK_SHAAR_LANDSTALKER_STALKIN_2, // Duplicate
    MUSIC_TRACK_TORVAL_HOVERBIKE_OR_BUST,
    MUSIC_TRACK_TORVAL_SEEK_AND_DESTROY,
    MUSIC_TRACK_TORVAL_THE_TURN_ON,
    MUSIC_TRACK_TORVAL_BLAST_OF_FRESH_AIR,

    MUSIC_TRACK_MARAUDER_ADVANCED_QUALIFIER, // Duplicate
    MUSIC_TRACK_STYGIA_JUNKING_THE_JAMMERS,
    MUSIC_TRACK_STYGIA_ENERGY_COLLECTOR, // Duplicate
    MUSIC_TRACK_STYGIA_SHIELDS_UP,
    MUSIC_TRACK_STYGIA_SHIELD_SURVIVAL,

    MUSIC_TRACK_SHAAR_AS_THE_WRENCH_TURNS_2, // Duplicate
    MUSIC_TRACK_MARAXUS_JAIL_BREAK,
    MUSIC_TRACK_MARAXUS_TOTAL_CONTROL, // Duplicate
    MUSIC_TRACK_MARAXUS_LEAVE_NO_MAN_BEHIND,
    MUSIC_TRACK_MARAXUS_DELTA_BLOCK,

    MUSIC_TRACK_GHOST_STATION_RUNNING_THE_GAUNTLET_1,
    MUSIC_TRACK_GHOST_STATION_GRINDING_CHASE, // Duplicate
    MUSIC_TRACK_GHOST_STATION_PRISON_BREAK,
    MUSIC_TRACK_GHOST_STATION_ESCAPE,

    MUSIC_TRACK_DREADZONE_CREDITS,
    MUSIC_TRACK_DREADZONE_EAST_GENERATOR, // Duplicate
    MUSIC_TRACK_DREADZONE_WEST_GENERATOR, // Duplicate
    MUSIC_TRACK_DREADZONE_DEFEAT_GLEEMON_VOX
};

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
void musicPlayTrack(int TrackNumber, int KeepPlaying);

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
void musicStopTrack(void);

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
void musicPauseTrack(int arg1);

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
void musicUnpauseTrack(void);

/*
 * NAME :		             musicTransitionTrack
 * 
 * DESCRIPTION :
 * 			                 Transitions to another track.
 * 
 * NOTES :                   This function is better used to fade-out the current track, so it
 *                           can transition to the next track without doing a hacky job of
 *                           manually changing the music volume.
 * 
 * ARGS : 
 *          arg1     :       No Idea.
 *          CudeTrack:       Transition to this track.
 *                           This will cue the track duration and other things.
 *          arg3     :       No Idea, but if set to 0x400, cued track will play.  If set to 0, cued track will will but have no sound.
 *          arg4     :       No Idea, but if set to 0x400, cued track will play.  If set to 0, cued track will will but have no sound.
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void musicTransitionTrack(short arg1, short CueTrack, short arg3, short arg4);

/*
 * NAME :		             musicIsLoaded
 * 
 * DESCRIPTION :
 * 			                 Returns non-zero if the game has loaded the music data.
 * 
 * NOTES :                   
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
int musicIsLoaded(void);

#endif // _LIBDL_MUSIC_H_
