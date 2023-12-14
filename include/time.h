/***************************************************
 * FILENAME :    time.h
 * 
 * DESCRIPTION :
 *     Contains time related constants.
 * 
 * NOTES :
 *     Each offset is determined per app id.
 *     This is to ensure compatibility between versions of Deadlocked/Gladiator.
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_TIME_H_
#define _LIBDL_TIME_H_

#define TIME_SECOND               (1000)
#define TIME_MINUTE               (TIME_SECOND * 60)
#define SYSTEM_TIME_TICKS_PER_MS  (0x24000)

/*
 * NAME :    timerGetSystemTime
 * 
 * DESCRIPTION :
 *       Returns system time.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
long timerGetSystemTime(void);

#endif // _LIBDL_TIME_H_
