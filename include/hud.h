/***************************************************
 * FILENAME :		hud.h
 * 
 * DESCRIPTION :
 * 		Contains hud specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 		Each offset is determined per app id.
 * 		This is to ensure compatibility between versions of Deadlocked/Gladiator.
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_HUD_H_
#define _LIBDL_HUD_H_

#include "common.h"
#include <tamtypes.h>

/*
 * NAME :		PlayerHUDFlags
 * 
 * DESCRIPTION :
 * 			Each bit represents a hud 
 * 
 * NOTES :
 * 
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
typedef struct PlayerHUDFlags
{
    char UNK_00[4];
    union {
        struct 
        {
            int Weapons : 1;
            int Healthbar : 1;
            int BoltCounter : 1;
            int DpadSelect : 1;
            int Minimap : 1;
            int Popup: 1;
            int ConquestScoreboard : 1;
            int ConquestUpgradeSelect : 1;
            int : 1;
            int NormalScoreboard : 1;
            int Meter : 1;
        };
        int Raw;
    } Flags;
} PlayerHUDFlags;

struct HUDDataSource
{
    int State;
    void* VTable;
};

struct HUDObject
{
    u32 RefCount;
    u8 ControlFlags;
    void * VTable;
};

struct HUDFrameObject
{
    struct HUDObject iObject;
    u32 ControlFlags;
    float Rotation;
    float PositionX;
    float PositionY;
    float ScaleX;
    float ScaleY;
    float DropShadowOffsetX;
    float DropShadowOffsetY;
    float Alpha;
    u32 Color;
    u32 DropShadowColor;
    int AnimationId;
    void * EventListenTOC;
};

struct HUDWidgetRectangleObject
{
    struct HUDFrameObject iFrame;
    float Rotation;
    u32 Color1;
    u32 Color2;
    u32 Color3;
    u16 TextureId;
    u16 Frame;
    char TotalFadeFrames;
    char FadeFrame;
    char RenderState;
    struct HUDDataSource* DataSource;
};

struct HUDWidgetHollowRectangleObject
{
    struct HUDFrameObject iFrame;
    float InsetsX;
    float InsetsY;
};

struct HUDWidgetTextObject
{
    struct HUDFrameObject iFrame;
    float RotationX;
    float RotationY;
    int FontTable;
    char* ExternalStringMemory;
    u32 FontFX;
    u8 WidgetTextControl;
    float MaxWidth;
    float MinimumScale;
    u8 PointSize;
    int FontText;
    float CachedScaleX;
    float CachedScaleY;
};

struct HUDWidgetTextAreaObject
{
    struct HUDFrameObject iFrame;
    void * Data;
    char TextSizesDirty;
    float TextW;
    float TextH;
};

struct HUDWidgetWheelObject
{
    struct HUDFrameObject iFrame;
    float RotationX;
    float RotationY;
    void * PresenterCallback;
    u32 Color;
    int TextureId;
};


/*
 * NAME :		hudGetPlayerFlags
 * 
 * DESCRIPTION :
 * 			Gets the respective local player's HUD flags object.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          localPlayerIndex:           Local index.
 * 
 * RETURN :
 *          Will return NULL if the localPlayerIndex is invalid.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ PlayerHUDFlags * hudGetPlayerFlags(int localPlayerIndex);

u32 hudGetTeamColor(int team, int variant);

void* hudGetCanvas(u32 canvas);
u32 hudGetCurrentCanvas(void);
struct HUDObject* hudCanvasGetObject(void* canvas, u32 objId);
void hudHidePopup(void);

#endif // _LIBDL_HUD_H_
