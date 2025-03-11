#include <stdlib.h>

/**
 * _strdup - Entry point
 *
 * Description: returns ptr to copy of string or null if null
 * @str: string to return ptr to
 * Return: returns null if fail or pointer to new string
 */

char *_strdup(char *str)
{

	int i;
	char *ptr;

	ptr = malloc(sizeof(str));

	if (!ptr)
		return (0);

	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);

}
