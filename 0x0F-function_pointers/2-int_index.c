#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - funtion that searches for an integer
 *@array: array
 *@size: number of elements in the array
 *@cmp:  pointer to the function to be used to compare values
 *
 * Return: If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
