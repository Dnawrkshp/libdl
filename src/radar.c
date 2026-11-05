#include "radar.h"

#define RADAR_BLIPS_START ((RadarBlip *)0x0030F020)

RadarBlip *radarGetBlips(void)
{
  return RADAR_BLIPS_START;
}
