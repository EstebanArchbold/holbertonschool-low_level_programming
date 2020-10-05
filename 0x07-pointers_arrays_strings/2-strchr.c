#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - asdasflkneaojfvnbeoiacnewiofvnweifnwepiofnewpoif
 *@s: entry variable
 *@c: entry point
 *Return: asdpoafpojneafpowenfó
 */
char *_strchr(char *s, char c)
{
for (;; s++)
{
if (*s == c)
{
return (s);
}
if (*s == '\0')
{
return (NULL);
}
}
}
