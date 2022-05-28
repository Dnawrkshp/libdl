/***************************************************
 * FILENAME :		utils.h
 * 
 * DESCRIPTION :
 * 		
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_UTILS_H_
#define _LIBDL_UTILS_H_


/*
 * NAME :		isInEEMemory
 * 
 * DESCRIPTION :
 * 			Returns non-zero if the pointer points to an address in EE memory.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          p     :           Pointer.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int isInEEMemory(void* p);

/*
 * NAME :		isInScratchpadMemory
 * 
 * DESCRIPTION :
 * 			Returns non-zero if the pointer points to an address in scratchpad memory.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          p     :           Pointer.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int isInScratchpadMemory(void* p);

/*
 * NAME :		isInIopMemory
 * 
 * DESCRIPTION :
 * 			Returns non-zero if the pointer points to an address in iop memory.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          p     :           Pointer.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int isInIopMemory(void* p);

#endif // _LIBDL_UTILS_H_
