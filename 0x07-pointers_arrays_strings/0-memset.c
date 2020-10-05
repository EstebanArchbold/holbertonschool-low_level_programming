#include "holberton.h"
/**
 * _memset - swap values of variables a and b
 *
 *@s: pointer intrance
 *@b: entry
 *@n: entry point
 *Return: returne the value
 */
char *_memset(char *s, char b, unsigned int n)
{
{
	for (; n > 0; n--)
		s[n - 1] = b;
}
return (s);
}
