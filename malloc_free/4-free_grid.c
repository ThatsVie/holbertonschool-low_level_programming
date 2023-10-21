#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated for 2D grid
 * @grid: pointer to @D grid to be freed
 * @height: number of rows in the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
