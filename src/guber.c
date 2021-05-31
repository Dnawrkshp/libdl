#include "guber.h"

//--------------------------------------------------------
#define FIRST_GUBER_MOBY_PTR                         ((GuberMoby**)0x00220710)

/*
 * Returns the first guber moby.
 */
GuberMoby * guberMobyGetFirst(void)
{
    return *FIRST_GUBER_MOBY_PTR;
}
