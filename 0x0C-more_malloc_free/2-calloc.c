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
	unsigned int i;
	char *f;

/* Check for invalid input*/
	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	/* Allocate memory using malloc*/
	void *ptr = malloc(nmemb * size);

	/* Check for malloc failure*/
	if (ptr == NULL)
		return (NULL);
	
	f = ptr;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';
	
	return (ptr);
}
