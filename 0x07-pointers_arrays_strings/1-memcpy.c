#include "holberton.h"
/**
 *_memcpy - copy and paste
 *@dest: destiny
 *@src: source
 *@n: entry point
 *Return: results
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	{
	for (; n > 0; n--)
		dest[n - 1] = src[n - 1];
			}
	return (dest);
}
