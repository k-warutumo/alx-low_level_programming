#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - function that allocates mem of an array
 *@size: size of each  data type
 *@nmemb: number of elements of an array
 *
 *Return: NULL if size=0 or nmemb=0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int moja;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == 0)
	{
		return (NULL);
	}

	for (moja = 0; moja < size * nmemb; moja++)
	{
		ptr[moja] = 0;
	}

	return ((void *)ptr);
}
