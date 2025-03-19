#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Entry point
 *
 * Description: reallocates memory block
 * @ptr: pointer to old memory block
 * @old_size: size in bytes of old memory block
 * @new_size: size in bytes of new memory block
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *new_ptr;
	char *old_ptr_char, *new_ptr_char;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (0);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
	{
		printf("Memory not allocated\n");
		free(new_ptr);
		return (0);
	}

	if (!ptr)
		return (new_ptr);

	old_ptr_char = ptr;
	new_ptr_char = new_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr_char[i] = old_ptr_char[i];

	free(ptr);

	return (new_ptr);

}
