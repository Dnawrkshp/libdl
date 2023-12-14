/***************************************************
 * FILENAME :    help.h
 * 
 * DESCRIPTION :
 *     Contains help specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_HELP_H_
#define _LIBDL_HELP_H_

#include "common.h"


/*
 *
 */
enum HELP_STRING_IDS
{
    HELP_STRING_ID_BATTLEDOME_TOWER = 0x2EB5,
    HELP_STRING_ID_CATACROM_GRAVEYARD = 0x2EB6,
    HELP_STRING_ID_SARATHOS_SWAMP = 0x2EB7,
    HELP_STRING_ID_DARK_CATHEDRAL = 0x2EB8,
    HELP_STRING_ID_TEMPLE_OF_SHAAR = 0x2EB9,
    HELP_STRING_ID_VALIX_LIGHTHOUSE = 0x2EBA,
    HELP_STRING_ID_MINING_FACILITY = 0x2EBB,
    HELP_STRING_ID_TORVAL_RUINS = 0x2EBC,
    HELP_STRING_ID_TEMPUS_STATION = 0x2EBD,
    HELP_STRING_ID_MARAXUS_PRISON = 0x2EBE,
    HELP_STRING_ID_GHOST_STATION = 0x2EBF,

    HELP_STRING_ID_CTF = 0x23F3,
    HELP_STRING_ID_CONQUEST = 0x2EA1,
    HELP_STRING_ID_DEATHMATCH = 0x2EA2,
    HELP_STRING_ID_KING_OF_THE_HILL = 0x2EC7,
    HELP_STRING_ID_JUGGERNAUT = 0x2EC8,
};

/*
 * NAME :    helpGetString
 * 
 * DESCRIPTION :
 *       Gets the respective string from the locale.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          stringId:           String index.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ char * helpGetString(int stringId);

#endif // _LIBDL_HELP_H_
