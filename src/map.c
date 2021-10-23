#include "map.h"
#include "help.h"

//--------------------------------------------------------
int mapMaskHasMask(int value, int maskValue)
{
    return (value & maskValue) == maskValue;
}

//--------------------------------------------------------
int mapIdToMask(int mapId)
{
    switch (mapId)
    {
        case MAP_ID_BATTLEDOME: return MAP_MASK_BATTLEDOME;
        case MAP_ID_CATACROM: return MAP_MASK_CATACROM;
        case MAP_ID_SARATHOS: return MAP_MASK_SARATHOS;
        case MAP_ID_DC: return MAP_MASK_DC;
        case MAP_ID_SHAAR: return MAP_MASK_SHAAR;
        case MAP_ID_TORVAL: return MAP_MASK_TORVAL;
        case MAP_ID_VALIX: return MAP_MASK_VALIX;
        case MAP_ID_TEMPUS: return MAP_MASK_TEMPUS;
        case MAP_ID_MF: return MAP_MASK_MF;
        case MAP_ID_MARAXUS: return MAP_MASK_MARAXUS;
        case MAP_ID_GS: return MAP_MASK_GS;
        default: return 0;
    }
}

//--------------------------------------------------------
int mapMaskToId(int mapMask)
{
    switch (mapMask)
    {
        case MAP_MASK_BATTLEDOME: return MAP_ID_BATTLEDOME;
        case MAP_MASK_CATACROM: return MAP_ID_CATACROM;
        case MAP_MASK_SARATHOS: return MAP_ID_SARATHOS;
        case MAP_MASK_DC: return MAP_ID_DC;
        case MAP_MASK_SHAAR: return MAP_ID_SHAAR;
        case MAP_MASK_TORVAL: return MAP_ID_TORVAL;
        case MAP_MASK_VALIX: return MAP_ID_VALIX;
        case MAP_MASK_TEMPUS: return MAP_ID_TEMPUS;
        case MAP_MASK_MF: return MAP_ID_MF;
        case MAP_MASK_MARAXUS: return MAP_ID_MARAXUS;
        case MAP_MASK_GS: return MAP_ID_GS;
        default: return 0;
    }
}

//--------------------------------------------------------
char * mapGetName(int mapId)
{
  switch (mapId)
  {
      case MAP_ID_BATTLEDOME: return helpGetString(HELP_STRING_ID_BATTLEDOME_TOWER);
      case MAP_ID_CATACROM: return helpGetString(HELP_STRING_ID_CATACROM_GRAVEYARD);
      case MAP_ID_SARATHOS: return helpGetString(HELP_STRING_ID_SARATHOS_SWAMP);
      case MAP_ID_DC: return helpGetString(HELP_STRING_ID_DARK_CATHEDRAL);
      case MAP_ID_SHAAR: return helpGetString(HELP_STRING_ID_TEMPLE_OF_SHAAR);
      case MAP_ID_TORVAL: return helpGetString(HELP_STRING_ID_TORVAL_RUINS);
      case MAP_ID_VALIX: return helpGetString(HELP_STRING_ID_VALIX_LIGHTHOUSE);
      case MAP_ID_TEMPUS: return helpGetString(HELP_STRING_ID_TEMPUS_STATION);
      case MAP_ID_MF: return helpGetString(HELP_STRING_ID_MINING_FACILITY);
      case MAP_ID_MARAXUS: return helpGetString(HELP_STRING_ID_MARAXUS_PRISON);
      case MAP_ID_GS: return helpGetString(HELP_STRING_ID_GHOST_STATION);
      default: return helpGetString(-1);
  }
}
