#include "holberton.h"
/**
 * _strspn - compare characters from one string to the other one
 *@s: entry point
 *@accept: point of entry
 *Return: the value of the numbers of characters compare
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, o, n;

	n = 0;

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
