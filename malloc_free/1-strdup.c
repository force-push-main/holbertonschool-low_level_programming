#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 *
 * Description: returns ptr to copy of string or null if null
 * @str: string to return ptr to
 * Return: returns null if fail or pointer to new string
 */

char *_strdup(char *str)
{

	long unsigned int i;
	char *ptr;

	if (!str)
		return (0);

	ptr = malloc(sizeof(str) * strlen(str));

	if (!ptr)
		return (0);

	for (i = 0; i < strlen(str); i++)
		ptr[i] = str[i];

	return (ptr);

}
