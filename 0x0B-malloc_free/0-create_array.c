#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;
	if (size <= 0)
       
		return (NULL);

	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
	
		return (NULL);

	for (i = 0; i <= size; i++)
		s[i] = c;
	return (s);
}
