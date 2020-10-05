#include "holberton.h"
/**
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	{
	for (; n > 0; n--)
		dest[n - 1] = src[n - 1];
			}
	return dest;
}
