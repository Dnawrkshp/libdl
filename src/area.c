#include "string.h"
#include "player.h"
#include "team.h"
#include "area.h"

#define AREAS_PTR                         ((AreaHeader_t**)0x00222698)

//--------------------------------------------------------------------------------
int areaGetArea(int areaIndex, Area_t* out)
{
  if (!out) return 0;
  AreaHeader_t* header = *AREAS_PTR;
  if (!header) return 0;
  if (areaIndex >= header->Count) return 0;

  AreaDef_t* def = (AreaDef_t*)(header + 1) + areaIndex;
  vector_copy(out->BSphere, def->BSphere);
  out->SplineCount = def->SplineCount;
  out->CuboidCount = def->CuboidCount;
  out->Splines = def->Splines;
  out->Cuboids = def->Cuboids;

  return 1;
}

//--------------------------------------------------------------------------------
int areaGetCount(void)
{
  AreaHeader_t* header = *AREAS_PTR;
  if (!header) return 0;

  return header->Count;
}
