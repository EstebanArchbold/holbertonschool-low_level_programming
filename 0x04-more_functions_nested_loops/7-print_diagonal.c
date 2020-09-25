#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: entry
 */
void print_diagonal(int n)
{
	int a, b;

	for (b = 1; b <= n; b++)
	{
		for (a = 1; a < b; a++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
