#include "dog.h"
#include <stdio.h>

/**
 *print_dog - funtion that prints dog
 *@d: pointer to struct dog
 *
 *
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");

}
