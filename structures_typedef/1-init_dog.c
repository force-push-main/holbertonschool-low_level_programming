#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Entry point
 *
 * Description: inits new var of struct dog
 * @d: name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: returns void ptr
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
