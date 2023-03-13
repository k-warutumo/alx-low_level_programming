#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *create_array - array of chars
 *@size: size of the variable
 *@c: character to initialise the array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int size;
	char c;

	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
