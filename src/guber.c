#include "guber.h"
#include "string.h"

//--------------------------------------------------------
#define FIRST_GUBER_MOBY_PTR                         ((GuberMoby**)0x00220710)
#define GUBER_BACKUP_SIZE                            (256)

GuberEvent guberSafeBackup[GUBER_BACKUP_SIZE];
int guberSafeBackupIdx = 0;

/*
 * Returns the first guber moby.
 */
GuberMoby * guberMobyGetFirst(void)
{
    return *FIRST_GUBER_MOBY_PTR;
}

int guberEventBackupPop(void)
{
  if (guberSafeBackupIdx <= 0) return 0;

  GuberEvent* event = guberEventAlloc();
  if (!event) return 0;

  memcpy(event, &guberSafeBackup[0], 0x58); // copy all but NextEvent ptr
  memmove(&guberSafeBackup[0], &guberSafeBackup[1], sizeof(GuberEvent) * (guberSafeBackupIdx - 1));
  --guberSafeBackupIdx;
  return 1;
}

GuberEvent* guberEventAllocSafe(void)
{
  // max allocated is 256
  // we want to avoid spamming clients with guber events
  // so backup old events
  int free = guberCountFreeEvents();
  if (free < 200) {

    // we don't have enough space, try to pop the latest event off the queue
    // if that fails then abort (return null)
    if (guberSafeBackupIdx >= (GUBER_BACKUP_SIZE-1) && !guberEventBackupPop())
      return NULL;

    return &guberSafeBackup[guberSafeBackupIdx++];
  }

  return guberEventAlloc();
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
