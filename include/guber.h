/***************************************************
 * FILENAME :    guber.h
 * 
 * DESCRIPTION :
 *     Contains guber specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 *     Each offset is determined per app id.
 *     This is to ensure compatibility between versions of Deadlocked/Gladiator.
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_GUBER_H_
#define _LIBDL_GUBER_H_

#include <tamtypes.h>
#include "math3d.h"
#include "common.h"
#include "moby.h"
#include "gid.h"

// the payload length is six bits even though NetData has 64 bytes
#define GUBER_EVENT_MAX_PAYLOAD_SIZE (63)

#define GUBER_EVENT_PRIVATE_SIZE_1(type) sizeof(type)
#define GUBER_EVENT_PRIVATE_SIZE_2(type, ...) (sizeof(type) + GUBER_EVENT_PRIVATE_SIZE_1(__VA_ARGS__))
#define GUBER_EVENT_PRIVATE_SIZE_3(type, ...) (sizeof(type) + GUBER_EVENT_PRIVATE_SIZE_2(__VA_ARGS__))
#define GUBER_EVENT_PRIVATE_SIZE_4(type, ...) (sizeof(type) + GUBER_EVENT_PRIVATE_SIZE_3(__VA_ARGS__))
#define GUBER_EVENT_PRIVATE_SIZE_5(type, ...) (sizeof(type) + GUBER_EVENT_PRIVATE_SIZE_4(__VA_ARGS__))
#define GUBER_EVENT_PRIVATE_SIZE_6(type, ...) (sizeof(type) + GUBER_EVENT_PRIVATE_SIZE_5(__VA_ARGS__))
#define GUBER_EVENT_PRIVATE_SIZE_7(type, ...) (sizeof(type) + GUBER_EVENT_PRIVATE_SIZE_6(__VA_ARGS__))
#define GUBER_EVENT_PRIVATE_SIZE_8(type, ...) (sizeof(type) + GUBER_EVENT_PRIVATE_SIZE_7(__VA_ARGS__))
#define GUBER_EVENT_PRIVATE_SELECT(_1, _2, _3, _4, _5, _6, _7, _8, name, ...) name
#define GUBER_EVENT_PRIVATE_SIZE(...) GUBER_EVENT_PRIVATE_SELECT(__VA_ARGS__, \
  GUBER_EVENT_PRIVATE_SIZE_8, GUBER_EVENT_PRIVATE_SIZE_7, GUBER_EVENT_PRIVATE_SIZE_6, GUBER_EVENT_PRIVATE_SIZE_5, \
  GUBER_EVENT_PRIVATE_SIZE_4, GUBER_EVENT_PRIVATE_SIZE_3, GUBER_EVENT_PRIVATE_SIZE_2, GUBER_EVENT_PRIVATE_SIZE_1)(__VA_ARGS__)
#define GUBER_EVENT_PRIVATE_JOIN_IMPL(a, b) a##b
#define GUBER_EVENT_PRIVATE_JOIN(a, b) GUBER_EVENT_PRIVATE_JOIN_IMPL(a, b)

/*
 * Compile-time check for one payload type or up to eight types written sequentially.
 * Multiple types use the sum of their sizes, without padding between writes.
 * GUBER_EVENT_ASSERT_PAYLOAD_FITS(struct StateUpdate);
 * GUBER_EVENT_ASSERT_PAYLOAD_FITS(int, short, struct StateUpdate);
 */
#define GUBER_EVENT_ASSERT_PAYLOAD_FITS(...) \
  typedef char GUBER_EVENT_PRIVATE_JOIN(GuberEventPayloadFits_, __LINE__)[ \
    (GUBER_EVENT_PRIVATE_SIZE(__VA_ARGS__) <= GUBER_EVENT_MAX_PAYLOAD_SIZE && \
     GUBER_EVENT_PRIVATE_SIZE(__VA_ARGS__) <= sizeof(((GuberEvent*)0)->NetEvent.NetData)) ? 1 : -1]

typedef Moby *(*GuberGetMoby_func)(struct Guber *guber);

/*
 * NAME :    PlayerVTable
 * 
 * DESCRIPTION :
 * 
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
struct GuberVTable
{
  void *FUNC_00;
  void *FUNC_04;
  void *FUNC_08;
  void *FUNC_0C;
  GuberGetMoby_func GetMoby;
  void *FUNC_14;
  void *FUNC_18;
  void *FUNC_1C;
  void *FUNC_20;
};

/*
 * NAME :    GuberDef
 * 
 * DESCRIPTION :
 *       Contains the guber definition struct data.
 * 
 * NOTES :
 *          Mobies are objects that can be spawned in game.
 *          This includes things like vehicles, turrets, mod pads, etc
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
typedef struct Guber
{
  union
  {
    Gid GID;
    u32 UID;
  } Id;

  int MasterHostId;
  int State;
  struct Guber *Next;
  struct Guber *Prev;
  struct GuberVTable *VTable;

} Guber;

typedef struct GuberMoby
{
  Guber Guber;
  Moby *Moby;
  short ModeBits;
  u8 PADDING_0[2];
  void *UpdateFunc;
  int ClientUpdateTime;
  int TeamNum;
  int EnableAutoMigrateMaster;
  int LastMasterMigrateTime;
  int CurrentMaster;
  int NextMaster;
  int MasterTransferTime;
  int LastMasterMessageTime;
  int MasterHandler;
  int AssignedMaster;
  int LastAssignedTransferMaster;
  char LastMessageNum;
  char MessageNum;
  u8 PADDING_1[2];
} GuberMoby;

typedef struct NetEvent
{
  struct
  {
    unsigned int EventID : 4;
    unsigned int NetDataSize : 6;
    unsigned int OriginClientIdx : 4;
    unsigned int RelDispatchTime : 18;
  };
  int CreateTime;
  unsigned int ObjUID;
  char NetData[64];
} NetEvent;

typedef struct GuberEvent
{
  NetEvent NetEvent;
  int NetSendTime;
  int NetSendTo;
  u8 NetDataOffset;
  char MsgSendPending;
  u8 PADDING[2];
  void *NextEvent;
} GuberEvent;

/*
 * Returns pointer to the first GuberMoby if it exists.
 */
__LIBDL_GETTER__ GuberMoby *guberMobyGetFirst(void);

Guber *guberGetObjectByUID(u32 uid);

Guber *guberGetObjectByMoby(Moby *moby);

Guber *guberGetOrCreateObjectByMoby(Moby *moby, int a1, int a2);

u32 guberGetUID(Moby *moby);

void guberEventRead(GuberEvent *event, void *dest, int size);

void guberEventWrite(GuberEvent *event, void *src, int size);

GuberEvent *guberEventAlloc(void);
GuberEvent *guberEventAllocSafe(void);

GuberEvent *guberEventCreateEvent(Guber *guber, int eventId, int arg3, int arg4);
GuberEvent *guberEventCreateEventSafe(Guber *guber, int eventId, int arg3, int arg4);
int guberCountFreeEvents(void);

int guberMobyCreateSpawned(short mobyId, short pvarSize, GuberEvent **event, Guber *parent);

struct Player *guberMobyGetPlayerDamager(Moby *moby);

void guberMobyDestroy(Moby *moby);

void *masterGet(u32 uid);
void *masterDelete(void *master);
void *masterCreate(void *object, u32 a1);

#endif // _LIBDL_GUBER_H_
