#include "sound.h"

SoundData* soundGetData(short soundId)
{
    return (SoundData*)(0x1D2200 + 0x80*soundId + 0x2c0);
}
