#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 *
 * Description: frees struct
 * @d: struct to be freed
 * Return: returns void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}
