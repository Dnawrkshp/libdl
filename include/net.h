/***************************************************
 * FILENAME :    net.h
 * 
 * DESCRIPTION :
 *   
 *   
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
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


typedef struct inetSifMRpcData {
  void    *paddr;  /* packet address */
  unsigned int  pid;  /* packet id */
  int    tid;  /* thread id */
  unsigned int  mode;  /* call mode */
} inetSifMRpcData_t;

typedef struct inetAddress {
  int reserved;  /* must be zero */
  char data[12];  /* IP address (4 bytes) + reserved (8 bytes) */
} inetAddress_t;

typedef struct inetParam {
  int type;
  int local_port;
  struct inetAddress remote_addr;
  int remote_port;
  int reserved[9];  /* must be zero */
} inetParam_t;

typedef void (* inetSifMEndFunc)(void *);

typedef struct inetSifMClientData {
  struct inetSifMRpcData  rpcd;
  unsigned int  command;
  void    *buff;
  void    *gp;
  inetSifMEndFunc  func;
  void    *para;
  void    *serve;
  int    sema;
  int    unbind;
  int    buffersize;
  int    stacksize;
  int    prio;
} inetSifMClientData_t;

void netInstallCustomMsgHandler(u8 id, NET_CALLBACK_DELEGATE callback);
int netSendMediusAppMessage(int transport, void * connection, int clientIndex, int msgClass, int msgId, int msgSize, void * payload);
int netSendCustomAppMessage(int transport, void * connection, int clientIndex, u8 customMsgId, int msgSize, void * payload);
int netBroadcastMediusAppMessage(int transport, void * connection, int msgId, int msgSize, void * payload);
int netBroadcastCustomAppMessage(int transport, void * connection, u8 customMsgId, int msgSize, void * payload);
int netSetSendAggregationInterval(void * connection, int clientAggTimeMs, int serverAggTimeMs);
int netDoIHaveNetError(void);

__LIBDL_GETTER__ void* netGetLobbyServerConnection(void);
__LIBDL_GETTER__ void* netGetDmeServerConnection(void);

// inet
int inetName2Address( inetSifMClientData_t *cd, void *net_buf, int flags, struct inetAddress *paddr, const char *name, int ms, int nretry, ... );
int inetCreate( inetSifMClientData_t *cd, void *net_buf, struct inetParam *param );
int inetOpen( inetSifMClientData_t *cd, void *net_buf, int cid, int ms );
int inetClose( inetSifMClientData_t *cd, void *net_buf, int cid, int ms );
int inetRecv( inetSifMClientData_t *cd, void *net_buf, int cid, void *ptr, int count, int *pflags, int ms );
int inetSend( inetSifMClientData_t *cd, void *net_buf, int cid, const void *ptr, int count, int *pflags, int ms );
int inetAbort( inetSifMClientData_t *cd, void *net_buf, int cid, int flags );
int inetControl( inetSifMClientData_t *cd, void *net_buf, int cid, int code, void *ptr, int len );
int inetGetInterfaceList( inetSifMClientData_t *cd, void *net_buf, int *interface_id_list, int n );
int inetInterfaceControl( inetSifMClientData_t *cd, void *net_buf, int interface_id, int code, void *ptr, int len );
int inetGetNameServers( inetSifMClientData_t *cd, void *net_buf, struct inetAddress *paddr, int n );

#endif // _LIBDL_NET_H_
