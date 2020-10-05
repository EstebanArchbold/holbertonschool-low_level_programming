#include "holberton.h"
/**
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, o, n;

	for (i = 0; s[i]; i++)
	{
	for (o = 0; accept[o]; o++)
	{
		if (s[i] == accept[o])
		{
			n++;
			break;
		}
	}
		if (s[i] != accept[o])
		{
			break;
}

			}						
 
		   	
	return (n);
}

