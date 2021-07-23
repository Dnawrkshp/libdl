/***************************************************
 * FILENAME :		mc.h
 * 
 * DESCRIPTION :
 * 		
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_MC_H_
#define _LIBDL_MC_H_

#include "common.h"

int McOpen(int port, int slot, const char *name, int mode);
int McClose(int fd);
int McSeek(int fd, int offset, int origin);
int McRead(int fd, void *buffer, int size);
int McWrite(int fd, const void *buffer, int size);
int McMkDir(int port, int slot, const char *name);
int McDelete(int port, int slot, const char *name);
int McFormat(int port, int slot);
int McUnformat(int port, int slot);

int McPollSema(void);
__LIBDL_GETTER__ int McGetResult(void);

#endif // _LIBDL_MC_H_
