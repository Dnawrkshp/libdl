/***************************************************
 * FILENAME :    string.h
 * 
 * DESCRIPTION :
 * 
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_STRING_H_
#define _LIBDL_STRING_H_

#include "common.h"

//--------------------------------------------------------
void *memset(void *ptr, int value, int num);
void *memcpy(void *destination, const void *source, int num);
void *memmove(void *destination, const void *source, int num);
void *memcmp(void *a, const void *b, int num);
char *strncpy(char *dest, const char *src, int n);
char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strlen(char *str);
char *strcmp(const char *str1, const char *str2);
char *strncmp(const char *str1, const char *str2, int n);
char *strstr(const char *str1, const char *str2);

int safe_strcpy(char *dest, const char *src, int n);

#endif // _LIBDL_STRING_H_
