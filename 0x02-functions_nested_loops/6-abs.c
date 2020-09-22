#include "holberton.h"
/**
 * _abs - Entry point
 * @n: entry
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else
{
if (n < 0)
{
n = n * -1;
return (n);
}
else
{
if (n == 0)
return (n);
}
}
return (0);
}
