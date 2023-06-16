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
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	void *ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);
}
