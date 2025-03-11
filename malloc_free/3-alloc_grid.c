#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *
 * Description: returns pointer to 2d grid
 * @height: height of grid
 * @width: width of grid
 * Return: returns null if a value <=0 or ptr to grid
 */

int **alloc_grid(int width, int height)
{
	int **grid_ptr, i, j;

	if (width <= 0 || height <= 0)
		return (0);

	grid_ptr = malloc(sizeof(int *) * height);

	if (!grid_ptr)
		return (0);

	for (i = 0; i < height; i++)
	{
		grid_ptr[i] = malloc(sizeof(int *) * width);
		if (!grid_ptr[i])
		{
			for (; i>= 0; i--)
				free(grid_ptr[i]);
			free(grid_ptr);

			return (0);
		}

		for (j = 0; j < width; j++)
			grid_ptr[i][j] = 0;
	}

	return (grid_ptr);
}
