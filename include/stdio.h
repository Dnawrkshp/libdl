/***************************************************
 * FILENAME :		stdio.h
 * 
 * DESCRIPTION :
 * 		Contains useful functions for debugging.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_STDIO_H_
#define _LIBDL_STDIO_H_

#include "common.h"

#ifdef DEBUG
    #define DPRINTF(fmt, ...)       \
        printf(fmt, __VA_ARGS__);
#else
    #define DPRINTF(fmt, ...) 
#endif

//--------------------------------------------------------
__LIBDL_INLINE__ int sprintf(char * buffer, const char * format, ...);
__LIBDL_INLINE__ int printf(const char * format, ...);

#endif // _LIBDL_STDIO_H_
