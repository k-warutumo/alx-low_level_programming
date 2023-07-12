#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *alloc_grid - returns pointer
 *@width: array width
 *@height: array height
 *Return: NULL if either is 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	/* Declare the grid variable inside the for loop*/
	for (int i = 0; i < height; i++)
	{
	int **grid = calloc(width, sizeof(int *));

	if (grid == NULL)
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
