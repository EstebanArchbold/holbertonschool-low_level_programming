#include "holberton.h"
/**
 * more_numbers - Entry point
 */
void more_numbers(void)
{
int c;
int n;
for (c = 0; c <= 9; c++)
{
_putchar ('\n');
for (n = 0; n <= 14; n++)
{
if (n >= 10)
{
_putchar((n/10)+'0');
}
_putchar((n%10)+'0');
}
}
}
