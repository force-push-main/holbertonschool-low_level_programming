#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: info struct for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef dog_t - new name for dog info struct
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
