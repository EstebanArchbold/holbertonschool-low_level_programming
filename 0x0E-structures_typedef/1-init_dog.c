#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
}
	else {
		d-> name = name;
		d-> age = age;
		d-> owner = owner;
}
}
