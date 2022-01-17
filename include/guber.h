/***************************************************
 * FILENAME :		guber.h
 * 
 * DESCRIPTION :
 * 		Contains guber specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 		Each offset is determined per app id.
 * 		This is to ensure compatibility between versions of Deadlocked/Gladiator.
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_GUBER_H_
#define _LIBDL_GUBER_H_

#include <tamtypes.h>
#include "math3d.h"
#include "common.h"
#include "moby.h"
#include "gid.h"


/*
 * NAME :		GuberDef
 * 
 * DESCRIPTION :
 * 			Contains the guber definition struct data.
 * 
 * NOTES :
 *          Mobies are objects that can be spawned in game.
 *          This includes things like vehicles, turrets, mod pads, etc
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */



typedef struct Guber 
{
    union
    {
        Gid GID;
        u32 UID;
    } Id;

    int MasterHostId;
    int State;
    struct Guber * Next;
    struct Guber * Prev;
    void * Vtable;

} Guber;

typedef struct GuberMoby
{
    Guber Guber;
    Moby * Moby;
    short ModeBits;
    u8 PADDING_0[2];
    void * UpdateFunc;
    int ClientUpdateTime;
    int TeamNum;
    int EnableAutoMigrateMaster;
    int LastMasterMigrateTime;
    int CurrentMaster;
    int NextMaster;
    int MasterTransferTime;
    int LastMasterMessageTime;
    int MasterHandler;
    int AssignedMaster;
    int LastAssignedTransferMaster;
    char LastMessageNum;
    char MessageNum;
    u8 PADDING_1[2];
} GuberMoby;

typedef struct GuberEvent
{
    u8 NetEvent[0x4C];
    int NetSendTime;
    int NetSendTo;
    u8 NetDataOffset;
    char MsgSendPending;
    u8 PADDING[2];
    void * NextEvent;
} GuberEvent;



/*
 * Returns pointer to the first GuberMoby if it exists.
 */
__LIBDL_GETTER__ GuberMoby * guberMobyGetFirst(void);

Guber * guberGetObjectByUID(u32 uid);

Guber * guberGetObjectByMoby(Moby* moby);

u32 guberGetUID(Moby* moby);

void guberEventRead(GuberEvent * event, void * dest, int size);

void guberEventWrite(GuberEvent * event, void * src, int size);

GuberEvent * guberEventCreateEvent(Guber * guber, int eventId, int arg3, int arg4);

GuberMoby * guberMobyCreateSpawned(short mobyId, short pvarSize, GuberEvent ** event, Guber * parent);

struct Player * guberMobyGetPlayerDamager(Moby* moby);

#endif // _LIBDL_GUBER_H_
