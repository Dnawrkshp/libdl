#include "radar.h"

#define RADAR_BLIPS_START                       ((RadarBlip*)0x0030F020)

int internal_uiDialog(void *, const char *, const char *, int, int, int, int);

RadarBlip * radarGetBlips(void)
{
    return RADAR_BLIPS_START;
}
