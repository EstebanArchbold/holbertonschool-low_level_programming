#include "holberton.h"
/**
 *
 *
 *
 */
char *string_toupper(char *up)
{
	int a;
	for (a = 0; up[a] != '\0'; a++ )
	{
		if (up[a] >= 'a' && up[a] <= 'z')
		{
			up[a] = up[a] - 32;
}
}
	return (up);
}
