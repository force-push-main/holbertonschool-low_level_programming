#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Entry point
 *
 * Description: creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	poppy = malloc(sizeof(dog_t));
	if (!poppy)
		return (0);

	poppy->name = name;
	poppy->age = age;
	poppy->owner = owner;

	return (poppy);
}
