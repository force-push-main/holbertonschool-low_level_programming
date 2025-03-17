#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Entry point
 *
 * Description: returns index of first el for which cmp != 0
 * @array: array to pass to callback
 * @size: size of array
 * @cmp: callback function
 * Return: always returns void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);


	return (-1);
}
