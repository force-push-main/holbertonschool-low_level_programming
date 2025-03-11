#include <stdlib.h>

/**
 * free_grid - Entry point
 *
 * Description: frees memory from 2d grid
 * @height: height of grid
 * @grid: grid to be freed
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
