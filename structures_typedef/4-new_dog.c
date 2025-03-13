#include <stdlib.h>
#include "dog.h"

/**
 * _strLen - helper function
 *
 * Description: finds length of string
 * @name: string to find length of
 * Return: lenght of string
 */

int _strlen(char *name)
{
	int i;

	i = 0;

	while (name[i])
		i++;

	return (i);
}

/**
 * cpyMember - Entry point
 *
 * Description: creates new dog
 * @member: member to add data to
 * @value: value to be added member
 * Return: pointer to member data
 */

char *cpyMember(char *member, char *value)
{
	int i;

	for (i = 0; i < _strlen(value); i++)
		member[i] = value[i];

	member[i] = '\0';

	return (member);
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
	dog_t *dog;

	if (!name || !age || !owner)
		return (0);

	dog = malloc(sizeof(dog_t));

	if (!dog)
	{
		free(dog);
		return (0);
	}

	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (!dog->owner || !dog->name)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (0);
	}

	dog->name = cpyMember(dog->name, name);
	dog->age = age;
	dog->owner = cpyMember(dog->owner, owner);

	return (dog);
}
