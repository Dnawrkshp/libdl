#include "guber.h"
#include "string.h"

//--------------------------------------------------------
#define FIRST_GUBER_MOBY_PTR                         ((GuberMoby**)0x00220710)

/*
 * Returns the first guber moby.
 */
GuberMoby * guberMobyGetFirst(void)
{
    return *FIRST_GUBER_MOBY_PTR;
}

GuberEvent * guberEventCreateEventSafe(Guber * guber, int eventId, int arg3, int arg4)
{
  if (*(u32*)0x002206a8 == 0) return NULL;
  return guberEventCreateEvent(guber, eventId, arg3, arg4);
}

int guberCountFreeEvents(void)
{
  GuberEvent* gEvent = *(GuberEvent**)0x002206a8;
  int freeCount = 0;
  while (gEvent) {
    if (!gEvent->MsgSendPending) ++freeCount;
    gEvent = (GuberEvent*)gEvent->NextEvent;
  }

  return freeCount;
}
