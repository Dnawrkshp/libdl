#include "hud.h"
#include "game.h"
#include <tamtypes.h>

/*
 * Player 1's hud.
 */
#define HUD_P1			((PlayerHUDFlags*)0x0030D8E0)

/*
 * Player 2's hud.
 */
#define HUD_P2			((PlayerHUDFlags*)0x0030D8F0)


void* internal_hudGetCanvas_inGame(u32 canvas);
u32 internal_hudGetCurrentCanvas_inGame(void);
struct HUDObject* internal_hudCanvasGetObject_inGame(void* canvas, u32 objId);


PlayerHUDFlags * hudGetPlayerFlags(int localPlayerIndex)
{
    if (localPlayerIndex == 0)
        return HUD_P1;
    else if (localPlayerIndex == 1)
        return HUD_P2;

    return 0;
}

void* hudGetCanvas(u32 canvas)
{
    if (isInGame()) {
        return internal_hudGetCanvas_inGame(canvas);
    }

    return NULL;
}

u32 hudGetCurrentCanvas(void)
{
    if (isInGame()) {
        return internal_hudGetCurrentCanvas_inGame();
    }

    return NULL;
}

struct HUDObject* hudCanvasGetObject(void* canvas, u32 objId)
{
    if (isInGame()) {
        return internal_hudCanvasGetObject_inGame(canvas, objId);
    }

    return NULL;
}
