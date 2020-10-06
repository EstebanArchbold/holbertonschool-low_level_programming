#include "holberton.h"
#include <stddef.h>
/**
 *_strpbrk - compare characters from one string to the other one
 *@s: entry point
 *@accept: point of entry
 *Return: the value of the numbers of characters compare
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)

	{

		for (b = 0; accept[b] != '\0'; b++)

		{

			if (accept[b] == s[a])

			{

				return (&s[a]);

			}

		}

	}

	return (NULL);
}
