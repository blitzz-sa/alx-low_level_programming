#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory used by a 2D grid (array of integers).
 * @grid: The 2D grid to free.
 * @height: The height dimension of the grid.
 *
 * Description: Frees the memory allocated for the 2D grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
