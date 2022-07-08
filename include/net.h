/***************************************************
 * FILENAME :		net.h
 * 
 * DESCRIPTION :
 * 		
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_NET_H_
#define _LIBDL_NET_H_

#include <tamtypes.h>
#include "common.h"

#define NET_CUSTOM_MESSAGE_CLASS                    (0)
#define NET_CUSTOM_MESSAGE_ID                       (7)
#define NET_LOBBY_CLIENT_INDEX              (0xFFFF)

// ensures packets arrive in order
#define NET_ORDER_CRITICAL                          (0x10)
// sends reliably
#define NET_DELIVERY_CRITICAL                       (0x40)
// skips aggregation
#define NET_LATENCY_CRITICAL                        (0x80)

typedef int (*NET_CALLBACK_DELEGATE)(void * connection, void * data);


void netInstallCustomMsgHandler(u8 id, NET_CALLBACK_DELEGATE callback);
int netSendMediusAppMessage(int transport, void * connection, int clientIndex, int msgClass, int msgId, int msgSize, void * payload);
int netSendCustomAppMessage(int transport, void * connection, int clientIndex, u8 customMsgId, int msgSize, void * payload);
int netBroadcastMediusAppMessage(int transport, void * connection, int msgId, int msgSize, void * payload);
int netBroadcastCustomAppMessage(int transport, void * connection, u8 customMsgId, int msgSize, void * payload);

__LIBDL_GETTER__ void* netGetLobbyServerConnection(void);
__LIBDL_GETTER__ void* netGetDmeServerConnection(void);

#endif // _LIBDL_NET_H_
