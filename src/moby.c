#include "moby.h"

//--------------------------------------------------------
#define MOBY_ARRAY                              ((Moby**)0x0026BDA0)
#define SPAWN_MOBY_FUNC                         (0x004F7200)
#define WATER_MOBY_PTR                          ((Moby**)0x0022D470)
#define MOBY_UPDATE_FUNC                        (0x004FE720)
#define MOBY_DESTROY_FUNC                       (0x004F76A0)

/*
 * Returns the collection of pointers to each loaded moby.
 */
Moby ** mobyGetLoaded(void)
{
    return MOBY_ARRAY;
}

/*
 * Returns the water moby if it exists.
 */
Moby * mobyGetWater(void)
{
    return *WATER_MOBY_PTR;
}
