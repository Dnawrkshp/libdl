/***************************************************
 * FILENAME :		string.h
 * 
 * DESCRIPTION :
 * 
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_STRING_H_
#define _LIBDL_STRING_H_

#include "common.h"

//--------------------------------------------------------
__LIBDL_INLINE__ void * memset(void * ptr, int value, int num);
__LIBDL_INLINE__ void * memcpy(void * destination, const void * source, int num);
__LIBDL_INLINE__ char * strncpy(char *dest, const char *src, int n);

#endif // _LIBDL_STRING_H_
