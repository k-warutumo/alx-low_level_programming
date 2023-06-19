#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * new_dog - Creates a new struct dog
 * @name: Pointer to the string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the string representing the dog's owner
 *
 * Return: Pointer to the newly created struct dog,
 *         or NULL if memory allocation fails or if any input parameter is NU
 *
 * Description: This function creates a new struct dog and stores a copy of
 *              the provided name and owner strings. It sets the age of the do
 *              to the provided value. The function returns a pointer to the
 *              newly created struct dog, or NULL if the memory allocationfail
 *              or if any input parameter is NULL.
 */
struct dog *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
	return (NULL);

struct dog *new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	return (NULL);

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}

	return (new_dog);
}
