#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 *array_range - creates an array of numbers
 *@min: min number in the array
 *@max: max number in the array
 *
 *Return: return NULL if malloca fails or if min>max.
 */

int *array_range(int min, int max)
{
	int i;

	if (min > max) /*check for invalid input*/
	return (NULL);

	int *arr = malloc((max - min + 1) * sizeof(int));/*allocate mem usin malloc*/

	if (arr == NULL)/*check for malloc failure*/
		return (NULL);

	for (i = 0, i <= max; i++) /*initialize array elements*/
	{
		arr[i] = min + i;
	}
	return (arr);
}
