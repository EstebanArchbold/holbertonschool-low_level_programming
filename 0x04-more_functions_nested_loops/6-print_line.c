#include "holberton.h"
/**
 * print_line - Entry point
 * @n: entry
 */
void print_line(int n)
{
int a;
if (n >= 1)
{
for (a = 0; a < n ; a++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
