#include <stdlib.h>

/**
 * _calloc - Entry point
 *
 * Description: allocates memory for size * nmemb array and clears memory
 * @nmemb: number of elements
 * @size: size of each element
 * Return: void ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *zeroArray;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (0);

	zeroArray = ptr;

	for (i = 0; i < nmemb; i++)
		zeroArray[i] = 0;

	return (ptr);
}
