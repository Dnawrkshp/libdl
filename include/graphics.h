/***************************************************
 * FILENAME :		graphics.h
 * 
 * DESCRIPTION :
 * 		
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_GRAPHICS_H_
#define _LIBDL_GRAPHICS_H_

#include <tamtypes.h>
#include "math3d.h"
#include "moby.h"


//--------------------------------------------------------
#define SCREEN_WIDTH           (512)
#define SCREEN_HEIGHT          (416)

//--------------------------------------------------------
typedef void (*gfxDrawFuncDef)(Moby*);

//--------------------------------------------------------
typedef float POINT[2] __attribute__((__aligned__(8)));

//--------------------------------------------------------
typedef struct RECT
{
    POINT TopLeft;
    POINT TopRight;
    POINT BottomLeft;
    POINT BottomRight;
} RECT;

//--------------------------------------------------------
typedef struct CubicLineEndPoint {
	/*   0 */ int iCoreRGBA;
	/*   4 */ int iGlowRGBA;
	/*   8 */ char bFadeEnd;
	/*   9 */ char style;
	/*   a */ unsigned char numEndPoints;
	/*   b */ char bDisabled;
	/*   c */ int iNumSkipPoints;
	/*  10 */ VECTOR vPos;
	/*  20 */ VECTOR vTangent;
	/*  30 */ VECTOR vTangentOccQuat;
} CubicLineEndPoint;

//--------------------------------------------------------
struct UV
{
  float U;
  float V;
};

//--------------------------------------------------------
struct QuadDef
{
  VECTOR VertexPositions[4];
  u32 VertexColors[4];
  struct UV VertexUVs[4];
	u64 Clamp;
	u64 Tex0;
	u64 Tex1;
	u64 Alpha;
};

/*
 * NAME :		gfxScreenSpaceText
 * 
 * DESCRIPTION :
 * 			Draws the text on the screen.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int gfxScreenSpaceText(float x, float y, float scaleX, float scaleY, u32 color, const char * string, int length, int alignment);

/*
 * NAME :		gfxScreenSpaceBox
 * 
 * DESCRIPTION :
 * 			Draws a quad on the screen.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      rect:           All four corners of quad. Use values 0-1 for x and y position.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void gfxScreenSpaceQuad(RECT * rect, u32 colorTL, u32 colorTR, u32 colorBL, u32 colorBR);

/*
 * NAME :		gfxScreenSpaceBox
 * 
 * DESCRIPTION :
 * 			Draws a box on the screen.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      x:              Screen X position (0-1).
 *      y:              Screen Y position (0-1).
 *      w:              width (0-1).
 *      h:              height (0-1).
 *      color:          color of box.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void gfxScreenSpaceBox(float x, float y, float w, float h, u32 color);

/*
 * NAME :		gfxPixelSpaceBox
 * 
 * DESCRIPTION :
 * 			Draws a box on the screen.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      x:              Screen X position (0-SCREEN_WIDTH).
 *      y:              Screen Y position (0-SCREEN_HEIGHT).
 *      w:              width (0-SCREEN_WIDTH).
 *      h:              height (0-SCREEN_HEIGHT).
 *      color:          color of box.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void gfxPixelSpaceBox(float x, float y, float w, float h, u32 color);

/*
 * NAME :		gfxWorldSpaceToScreenSpace
 * 
 * DESCRIPTION :
 * 			Converts world space to screen space pixel coordinates.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int gfxWorldSpaceToScreenSpace(VECTOR position, int * x, int * y);

void gfxScreenSpacePIF(RECT * rect);

int gfxGetFontWidth(const char * string, int length, float scale);

void gfxDoGifPaging(void);
void gfxSetupGifPaging(int);
u64 gfxGetFrameTex(int id);
u64 gfxGetEffectTex(int id, int);
void gfxDrawSprite(float x, float y, float w, float h, int t0, int t1, int texW, int texH, u64 color, u64 texture);

void gfxDrawCubicLine(void * fxUtilsInterface, CubicLineEndPoint * points, int numPoints, void * cubicLineStatic, float scale);
Moby* gfxDrawSimpleTwoPointLightning(void* fxSpawningInterface, VECTOR from, VECTOR to, int life, int numStrands, int bContactBothEnds, void* style, Moby* startMoby, Moby* endMoby, u32 color);
void gfxDrawQuad(void * fxRegistrySystemInterface, struct QuadDef * quadDef, MATRIX worldMatrix, u32 a3);
void gfxDrawBillboardQuad(u128 pos, float size, u32 color, int alpha, float rot, int texId, int mode, float pushToCamera);
void gfxResetQuad(struct QuadDef * quadDef);
void gfxRegisterDrawFunction(void ** a0, gfxDrawFuncDef * callback, Moby* moby);

#endif // _LIBDL_GRAPHICS_H_
