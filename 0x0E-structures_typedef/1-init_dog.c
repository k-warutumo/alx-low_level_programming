#include"dog.h"
#include<stdlib.h>

/**
 *init_dog - initialize variable of type struct_dog
 *@d: pointer to variable struct dog
 *@name: name in strcut
 *@owner: owner in struct
 *@age: age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
