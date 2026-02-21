#include "string.h"

int safe_strcpy(char *dest, const char *src, int n)
{
  int i = 0;

  if (!dest || !src)
    return 0;

  if (n == 0)
    return 0;

  /* Copy up to dest_size - 1 characters */
  for (i = 0; i < n - 1 && src[i] != '\0'; ++i)
  {
    dest[i] = src[i];
  }

  /* Always null terminate */
  dest[i] = '\0';

  return i;
}
