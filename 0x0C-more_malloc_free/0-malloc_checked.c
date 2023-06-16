#include"main.h"
#include<stdlib.h>


/**
 * malloc_checked - function that allocates mem using malloc
 * @b: data to be allocated memory
 *
 * Return: pointer to the allocated memory
 * exit 98 if it fails
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}

	return (ptr);
}
