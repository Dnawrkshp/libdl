/***************************************************
 * FILENAME :    stdio.h
 * 
 * DESCRIPTION :
 *     Contains useful functions for debugging.
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_STDIO_H_
#define _LIBDL_STDIO_H_

#include "common.h"


//--------------------------------------------------------
int sprintf(char * buffer, const char * format, ...);
int snprintf(char * buffer, long n, const char * format, ...);
int printf(const char * format, ...);
int sscanf(char * buffer, const char * format, ...);


//--------------------------------------------------------
#ifdef DEBUG
    #define DPRINTF(fmt, ...)       \
        printf("%s"fmt, "", ##__VA_ARGS__);
#else
    #define DPRINTF(fmt, ...) 
#endif


#endif // _LIBDL_STDIO_H_
