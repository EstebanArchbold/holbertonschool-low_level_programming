#include "holberton.h"
/**
 * _puts - print a string followed by a new line
 *
 * @str:entry point
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
		_putchar('\n');
}


