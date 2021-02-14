#include <tamtypes.h>
#include "string.h"
#include "spawnpoint.h"

/*
 * Player 1's hud.
 */
#define SPAWNPOINTS		    ((SpawnPoint*)(*(u32*)0x00222820))

/*
 *
 */
#define SP_COUNT    (*(int*)0x00222824)

/*
 * Player 2's hud.
 */
#define SP_HILL_PTR	        (*(u32*)0x00222698)

int spawnPointGetCount()
{
    return SP_COUNT;
}

short hillPointGetCount()
{
    u32 * hillInfo = (u32*)SP_HILL_PTR;
    if (!hillInfo)
        return 0;

    return *((short*)(hillInfo + 12) + 1);
}

void hillPointSetCount(short count)
{
    u32 * hillInfo = (u32*)SP_HILL_PTR;
    if (!hillInfo)
        return;

    *(short*)(hillInfo + 0x30) = count;
}

int hillPointGetIndex(int id)
{
    u32 * hillInfo = (u32*)SP_HILL_PTR;
    if (!hillInfo)
        return -1;

    return (hillInfo + 0x50)[id];
}

void hillPointSetIndex(int id, int value)
{
    u32 * hillInfo = (u32*)SP_HILL_PTR;
    if (!hillInfo)
        return;

    (hillInfo + 0x50)[id] = value;
}

SpawnPoint * spawnPointGet(int index)
{
    SpawnPoint * spawnPoints = SPAWNPOINTS;
    if (!spawnPoints)
        return NULL;

    return &spawnPoints[index];
}

void spawnPointSet(SpawnPoint * sp, int index)
{
    SpawnPoint * spawnPoints = SPAWNPOINTS;
    if (!spawnPoints)
        return;

    memcpy(&spawnPoints[index], sp, sizeof(SpawnPoint));
}
