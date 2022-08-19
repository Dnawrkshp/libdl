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
__LIBDL_INLINE__ void * memmove(void * destination, const void * source, int num);
__LIBDL_INLINE__ char * strncpy(char *dest, const char *src, int n);
__LIBDL_INLINE__ int strlen(char *str);
__LIBDL_INLINE__ char * strcmp(const char *str1, const char *str2);

#endif // _LIBDL_STRING_H_
