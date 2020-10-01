#include "holberton.h"

/**
 * *_strncat - copies string src to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * @n: entry point
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{}
	for (b = 0; src[b] != '\0'; b++)
	{
		if (b < n)
		{
			dest[a++] = src[b];
}
}
	return (dest);
}
