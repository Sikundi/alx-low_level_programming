#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid of intergers
 * @grid: 2 dimensional arrau to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
