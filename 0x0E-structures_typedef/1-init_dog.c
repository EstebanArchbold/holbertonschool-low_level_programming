#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - dog information
 *@d: pointer directioner
 *@name: name of the dog
 *@age: how old is he or she
 *@owner: who belong
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
}
	else
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
}
