#include <tamtypes.h>
#include "string.h"
#include "spawnpoint.h"
#include "game.h"

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
    u32 hillInfo = (u32)SP_HILL_PTR;
    if (!hillInfo)
        return;

    *(short*)(hillInfo + 0x32) = count;
}

int hillPointGetIndex(int id)
{
    u32 hillInfo = (u32)SP_HILL_PTR;
    if (!hillInfo)
        return -1;

    return ((u32*)(hillInfo + 0x50))[id];
}

void hillPointSetIndex(int id, int value)
{
    u32 hillInfo = (u32)SP_HILL_PTR;
    if (!hillInfo)
        return;

    ((u32*)(hillInfo + 0x50))[id] = value;
}

int spawnPointIsPlayer(int index)
{
    GameData* gameData = gameGetData();
    int* spArray = (int*)gameData->AllYourBaseGameData->Team1_SpawnPts[2];
    int sp = 0;
    while ((sp = *spArray++) >= 0)
    {
        if (sp == index)
            return 1;
    }

    return 0;
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
