#include "holberton.h"

/**
 * *_strncat - copies string src to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * @n: entry point
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
}
	return (dest);
}
