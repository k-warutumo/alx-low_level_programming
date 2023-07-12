#include"main.h"
#include<stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **area;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	area = malloc(height * sizeof(int *));
	if (area == NULL)
	{
		free(area);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		area[x] = malloc(width * sizeof(int));
		if (area[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(area[x]);
			free(area);
			return (NULL);
		}
	}

	for  (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			area[x][y] = 0;

	return (area);
}
