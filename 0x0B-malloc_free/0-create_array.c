#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *create_array - function that creates an array of characters
 *@size: size of int
 *@c: character
 *@array: array of chars
 *
 */

char *create_array(unsigned int size, char c)
{
	/*decalration of variable*/
	char *array;
	int i;

	if (size == 0)
	{
	return (NULL);
	}

	/* ALLOCATE MEMORY Memory for the array*/

	array = malloc(size * sizeof(char));

	/*initialize array with specified char*/
	for (i = 0; i < (int)size; i++)
	{
	array[i] = c;
	}

	return (array);
}

