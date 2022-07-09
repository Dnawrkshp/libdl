#include "string.h"
#include "player.h"
#include "team.h"
#include "camera.h"

#define GAME_CAMERA                         ((GameCamera*)0x0022CDC0)

//--------------------------------------------------------------------------------
GameCamera* cameraGetGameCamera(int cameraIndex)
{
    return GAME_CAMERA + cameraIndex;
}
