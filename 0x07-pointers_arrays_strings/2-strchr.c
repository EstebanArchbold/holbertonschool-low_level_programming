#include "holberton.h"
#include <stddef.h>
/**
 *_strchr - here there will be a description
 *@s: entry variable
 *@c: entry point
 */
char *_strchr(char *s, char c)
{
	for (;; s++) {
		if (*s == c) return s;
		if (!*s) return NULL;
        }
	return NULL;
}
