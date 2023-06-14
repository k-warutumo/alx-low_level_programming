#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *alloc_grid - function that returns a pointer to a 2 dim array
 *@height: an int
 *@width: a int
 *Return: NULL if fails
 */

int **alloc_grid(int width, int height)
{
	/*declare the variable grid*/
	int **grid = calloc(height, sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (int j = 0; j < i; j++)
	{
	free(grid[j]);
	}
		free(grid);
		return (NULL);

	}
	for (int j = 0; j < width; j++)
		{
		grid[i][j] = 0;
		}
	}

	return (grid);
}
