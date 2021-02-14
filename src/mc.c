#include "mc.h"
#include <kernel.h>
#include "string.h"

#define MC_SEMA                         (*(u32*)0x00167BFC)
#define MC_RESULT                       (*(s32*)0x001AEE40)

//--------------------------------------------------------
int McPollSema(void)
{
    if (*(u32*)0x00171B04 != 0)
    {
        if (((int (*)(int,int,int))0x0013A7A0)(1, 0x171AF0, 0x171AF4) != 1)
            return -1;
    }
    
    return *(int*)0x171AF4;
}

//--------------------------------------------------------
int McGetResult(void)
{
    return MC_RESULT;
}
