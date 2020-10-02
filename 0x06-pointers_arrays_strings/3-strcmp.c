#include "holberton.h"

/**
 * *_strncpy - copies string src to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * @n: entry point
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/
int _strcmp(char *s1, char *s2)
{
	int n;
	for (n = 0; s1[n] == s2[n]; n++)
		if (s1[n] == '\0')
			return 0;
	return s1[n]-s2[n];
}
