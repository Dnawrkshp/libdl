#include "help.h"

//--------------------------------------------------------
char * helpGetString(int stringId)
{
  if (gameIsIn())
  {
      return internal_helpGetString_inGame(stringId);
  }
  else
  {
      return internal_helpGetString_inLobby(stringId);
  }
}
