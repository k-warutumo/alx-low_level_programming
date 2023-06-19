#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - funtion that initialises dog.h
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *@d: the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner
	}
}
