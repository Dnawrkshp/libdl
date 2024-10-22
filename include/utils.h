/***************************************************
 * FILENAME :    utils.h
 * 
 * DESCRIPTION :
 *     
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_UTILS_H_
#define _LIBDL_UTILS_H_


#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((unsigned long)(!(sizeof(x) % sizeof(0[x])))))
#define OFFSET_OF(st, m) ((u32)(&((st *)0)->m))
#define HOOK_JAL(dest, function)            (*(u32*)(dest) = 0x0C000000 | ((u32)(function) >> 2))
#define HOOK_J(dest, function)              (*(u32*)(dest) = 0x08000000 | ((u32)(function) >> 2))
#define POKE_F32(dest, value)               (*(float*)(dest) = value)
#define POKE_U32(dest, value)                (*(u32*)(dest) = value)
#define POKE_U16(dest, value)                (*(u16*)(dest) = value)
#define POKE_U8(dest, value)                (*(u8*)(dest) = value)

#define HOOK_JAL_OP(dest, function, op)\
  *(u32*)(dest) = 0x0C000000 | ((u32)(function) >> 2);\
  *(u32*)(dest + 4) = op;

#define HOOK_J_OP(dest, function, op)\
  *(u32*)(dest) = 0x08000000 | ((u32)(function) >> 2);\
  *(u32*)(dest + 4) = op;


/*
 * NAME :    isInEEMemory
 * 
 * DESCRIPTION :
 *       Returns non-zero if the pointer points to an address in EE memory.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          p     :           Pointer.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int isInEEMemory(void* p);

/*
 * NAME :    isInScratchpadMemory
 * 
 * DESCRIPTION :
 *       Returns non-zero if the pointer points to an address in scratchpad memory.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          p     :           Pointer.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int isInScratchpadMemory(void* p);

/*
 * NAME :    isInIopMemory
 * 
 * DESCRIPTION :
 *       Returns non-zero if the pointer points to an address in iop memory.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          p     :           Pointer.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int isInIopMemory(void* p);

#endif // _LIBDL_UTILS_H_
