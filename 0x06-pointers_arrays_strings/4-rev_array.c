#include "holberton.h"
/**
 *reverse_array - swap values of variables a and b
 *
 *@a: pointer intrance
 *@n: entry
 */
void reverse_array(int *a, int n)
{
	int i, b, e;

	n = n - 1;

	for (i = 0; i <= n; i++)
	{
		b = a[i];
		e = a[n];
		a[i] = e;
		a[n] = b;
		n--;
}

}
