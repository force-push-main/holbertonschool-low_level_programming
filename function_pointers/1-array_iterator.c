#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Entry point
 *
 * Description: runs callback function on array
 * @array: array to pass to callback
 * @size: size of array
 * @action: callback function
 * Return: always returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size == 0 || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
