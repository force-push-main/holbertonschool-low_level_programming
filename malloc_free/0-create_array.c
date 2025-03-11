#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *
 * Description: creates array of chars, inits with specific char
 * @size: size of array
 * @c: initial char
 * Return: returns null if fail or pointer to char[]
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (0);

	ptr = malloc(sizeof(c) * size);

	if (ptr == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
