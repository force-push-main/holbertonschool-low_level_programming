#include <stdlib.h>

/**
 * malloc_checked - Entry point
 *
 * Description: allocates memory or exits if fail
 * @b: int to be allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (!ptr)
		exit(98);

	return (ptr);
}
