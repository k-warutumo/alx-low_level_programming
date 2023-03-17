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
	int *array, index, size; ;

	if (min > max) /*check for invalid input*/
	return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);/*allocate mem using malloc*/

	if (array == NULL)/*Check for malloc failure*/
		return (NULL);

	for (index = 0; index < size; index++)/*initailize array elements*/
		array[index] = min++;


	return (array);
}
