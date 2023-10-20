#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers with given dimensions.
 * @width: number of columns in 2D array
 * @height: number of rows in 2D array
 *
 * Return: On success, a pointer to allocatec 2D array.
 * If width or height is 0 or negative,or 
 * if memory allocation fails, returns NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i,j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

