#include <stdlib.h>

/**
 * array_range - Entry point
 *
 * Description: returns ptr to array couting min to max
 * @min: starting number of array
 * @max: ending number of array
 * Return: int ptr
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (0);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (0);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);

}
