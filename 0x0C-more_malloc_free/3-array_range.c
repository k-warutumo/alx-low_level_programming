#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates arr of integers
 *@min: minimum value of arr integers
 *@max: maximum value of array intergers
 *Return: pointer to newly created array
 *NULL if min>max or Malloc fails
 */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);  /* Return NULL if min is greater than max*/
	}

	int size = max - min + 1;  /* Calculate the size of the array*/

	int *arr = malloc(size * sizeof(int));/*Allocate memory for the array*/

	if (arr == NULL)
	{
	return (NULL);  /* Return NULL if malloc fails*/
	}

	int i;

	for (i = 0; i < size; i++)
	{
	arr[i] = min + i;  /* Assign values to the array in order*/
	}

	return (arr);
}
