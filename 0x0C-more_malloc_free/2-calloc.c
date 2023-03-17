#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * _calloc - Allocates memory for an array
 *@nmemb: number of  array elements
 *@size: size of array elements
 *Return: NULL if malloc fails or size/nmemb =0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

/* Check for invalid input*/
	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	/* Allocate memory using malloc*/
	void *ptr = malloc(nmemb * size);

	/* Check for malloc failure*/
	if (ptr == NULL)
	{
	return (NULL);
	}

	/* Set memory to zero */
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
