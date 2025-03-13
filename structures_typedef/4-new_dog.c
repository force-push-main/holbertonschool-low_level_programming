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
	char *nameCpy, *ownerCpy;

	nameCpy = malloc(sizeof(char) * 6);
	ownerCpy = malloc(sizeof(char) * 9);
	poppy = malloc(sizeof(dog_t));

	if (!poppy || !nameCpy || !ownerCpy)
	{
		free(nameCpy);
		free(ownerCpy);
		free(poppy);
		return (0);
	}

	nameCpy = name;
	ownerCpy = owner;

	poppy->name = nameCpy;
	poppy->age = age;
	poppy->owner = ownerCpy;

	return (poppy);
}
