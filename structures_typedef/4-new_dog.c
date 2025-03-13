#include <stdlib.h>
#include "dog.h"

/**
 * createPtr - helper function
 *
 * Description: creates ptr to member
 * @member: data to create pointer
 * Return: pointer to member data
 */

char *createPtr(char *member)
{
	char *ptr;
	int i, j;

	while (member[i])
		i++;

	ptr = malloc(sizeof(char) * i + 1);

	if (!ptr)
	{
		free(ptr);
		return (0);
	}

	for (j = 0; j < i; j++)
		ptr[j] = member[j];

	ptr[j] = '\0';


	return (ptr);
}

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

	poppy = malloc(sizeof(dog_t));
	nameCpy = createPtr(name);
	ownerCpy = createPtr(owner);

	if (!poppy || !nameCpy || !ownerCpy)
	{
		free(poppy);
		return (0);
	}

	poppy->name = nameCpy;
	poppy->age = age;
	poppy->owner = ownerCpy;

	return (poppy);
}
