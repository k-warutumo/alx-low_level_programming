#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *create_array - array of chars
 *@size: size of the variable
 *@c: character to initialise the array
 *Return: NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}

	for (index = 0; index < size; index++)
	{
	array[index] = c;
	}
	return (array);
}
