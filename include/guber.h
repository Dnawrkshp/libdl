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
typedef struct GuberDef
{
    /*
    F6000000 FFFFFFFE 00000001 00000000
    0035DFFC 0038D648 00000000 00000000
    00000000 FFFFFFFF FFFFFFFF 00000000
    00000000 FFFFFFFF FFFFFFFF FFFFFFFF
    FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF
    00000100

    F6000001 00000000 00000001 0035DFA8
    0035E050 0038D648 01661180 00000054
    003CFC00 FFFFFFFF FFFFFFFF 00000001
    00002867 00000000 FFFFFFFF FFFFFFFF
    FFFFFFFF 00000000 00000000 FFFFFFFF
    00000201

    F6000002 00000000 00000001 0035DFFC
    0035E0A4 0038D648 01661280 00000054
    003CFC00 FFFFFFFF FFFFFFFF 00000001
    00002867 00000000 FFFFFFFF FFFFFFFF
    FFFFFFFF 00000000 00000000 FFFFFFFF
    00000201
    */

    u32 Id;
    int UNK_4;
    int UNK_8;

    struct GuberDef * LastGuber;
    struct GuberDef * NextGuber;

    void * UNK_14;
    Moby * MobyPointer;

    int UNK_1C;
    void * UpdateFunc;
    int UNK_24;
    int UNK_28;
    int UNK_2C;
    int UNK_30;
    int UNK_34;
    int UNK_38;
    int UNK_3C;
    int UNK_40;
    int UNK_44;
    int UNK_48;
    int UNK_4C;
    int UNK_50;
} GuberDef;

/*
 * Returns pointer to the first moby if it exists.
 */
__LIBDL_GETTER__ GuberDef * guberGetFirst(void);

#endif // _LIBDL_GUBER_H_
