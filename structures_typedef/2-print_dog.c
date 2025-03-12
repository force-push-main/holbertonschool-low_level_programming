#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Entry point
 *
 * Description: prints members of struct dog
 * @d: name of struct
 * Return: returns void
 */

void print_dog(struct dog *d)
{
	if (!d)
		;

	else if (!d->name)
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);

	else if (!d->age)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);

	else if (!d->owner)
		printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);

	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
