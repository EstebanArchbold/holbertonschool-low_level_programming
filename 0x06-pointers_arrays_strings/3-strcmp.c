#include "holberton.h"

/**
 * *_strcmp - copies string src to buffer pointed to by dest
 * @s1: string pointer
 * @s2: buffer pointer
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/
int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] == s2[n]; n++)
		if (s1[n] == '\0')
			return (0);
	return (s1[n] - s2[n]);
}
