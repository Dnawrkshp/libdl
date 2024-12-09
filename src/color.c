#include "game.h"
#include "color.h"

u32 internal_colorLerp_inGame(u32, u32, float);
u32 internal_colorLerp_inLobby(u32, u32, float);

/*
 * NAME :    colorLerp
 * 
 * DESCRIPTION :
 *       Interpolates the color from a to b by t.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          a     :           Start color.
 *          b     :           End color.
 *          t     :           Amount to interpolate by.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
u32 colorLerp(u32 a, u32 b, float t)
{
    if (isInGame())
    {
        return internal_colorLerp_inGame(a, b, t);
    }
    else if (isInMenus())
    {
        return internal_colorLerp_inLobby(a, b, t);
    }

    return a;
}

u32 colorScale(u32 color, float scale)
{
  int r = scale * (color & 0xff);
  int g = scale * ((color >> 8) & 0xff);
  int b = scale * ((color >> 16) & 0xff);
  int a = scale * ((color >> 24) & 0xff);

  if (r > 255) r = 255;
  if (g > 255) g = 255;
  if (b > 255) b = 255;
  if (a > 255) a = 255;

  return (a << 24) | (b << 16) | (g << 8) | r;
}

int colorGetMax(u32 color)
{
  int r = color & 0xff;
  int g = (color >> 8) & 0xff;
  int b = (color >> 16) & 0xff;
  return (r > g) ? (r > b ? r : b) : (g > b ? g : b);
}

u32 colorSetChannel(u32 color, int channel, u8 value)
{
  int shift = 8 * channel;
  int mask = 0xff << shift;

  return (color & ~mask) | (value << shift);
}
