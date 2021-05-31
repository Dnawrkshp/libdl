#include "guber.h"

//--------------------------------------------------------
#define FIRST_GUBER_PTR                         ((GuberDef**)0x00220710)

/*
 * Returns the first guber def.
 */
GuberDef * guberGetFirst(void)
{
    return *FIRST_GUBER_PTR;
}
