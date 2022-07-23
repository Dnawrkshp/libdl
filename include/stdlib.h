/***************************************************
 * FILENAME :		stdlib.h
 * 
 * DESCRIPTION :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_STDLIB_H_
#define _LIBDL_STDLIB_H_

#include "common.h"


//--------------------------------------------------------
__LIBDL_INLINE__ void* malloc( unsigned long size );
__LIBDL_INLINE__ void free( void* ptr );

#endif // _LIBDL_STDLIB_H_
