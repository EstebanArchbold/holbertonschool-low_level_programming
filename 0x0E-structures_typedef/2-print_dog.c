#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - dog information
 *@d: pointer directioner
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
{
	printf("Name: %s\n", d->name);
	if (d->owner == NULL)
		printf("Owner: (nil)");
else
		{
			printf("Owner: %s\n", d->owner);
}
}
}
	printf("Age: %f\n", d->age);
}
