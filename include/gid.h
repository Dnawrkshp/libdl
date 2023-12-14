/***************************************************
 * FILENAME :    gid.h
 * 
 * DESCRIPTION :
 * 
 * NOTES :
 *     Each offset is determined per app id.
 *     This is to ensure compatibility between versions of Deadlocked/Gladiator.
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_GID_H_
#define _LIBDL_GID_H_

#include <tamtypes.h>

/*
 * NAME :    Gid
 * 
 * DESCRIPTION :
 *       Contains the gid definition struct data.
 * 
 * NOTES :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
typedef struct
{
    u32 ObjectIndex : 12;
    u32 ObjectCount : 12;
    u32 ObjectType : 4;
    u32 HostId : 4;
} Gid;

#endif // _LIBDL_GID_H_
