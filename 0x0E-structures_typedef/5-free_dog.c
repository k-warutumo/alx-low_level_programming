#include "dog.h"
#include<stdlib.h>
#include <stddef.h>

/**
 *free_dog - frees memory for struct dog
 *@d: pointer to dtruct dog
 *
 *
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d  == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
