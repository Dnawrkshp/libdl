#include "moby.h"

//--------------------------------------------------------
#define SPAWN_MOBY_FUNC                         (0x004F7200)
#define FIRST_MOBY_PTR                          ((Moby**)0x0022D470)
#define MOBY_UPDATE_FUNC                        (0x004FE720)
#define MOBY_DESTROY_FUNC                       (0x004F76A0)

/*
 * Returns the first moby.
 */
Moby * mobyGetFirst(void)
{
    return *FIRST_MOBY_PTR;
}

/*
 * 
 */
int mobyGetNumSpawnableMobys(void)
{
    return *(int*)0x00222790;
}
