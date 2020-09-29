#include "holberton.h"
/**
 * swap_int - change the value each other
 *
 * @a: entry point
 * @b: entry point
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
