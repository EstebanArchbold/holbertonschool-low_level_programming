#include "holberton.h"

/**
 * *_strcat - copies string src to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a++] = src[b];
}
	return (dest);
}
