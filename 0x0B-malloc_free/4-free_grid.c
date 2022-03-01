#include "main.h"
/**
 * free_grid - frees the allocated memory
 * @grid: the grid
 * @height: the grid height
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
