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

	if (!str)
		return (0);

	i = 0;
	while (str[i])
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (!ptr)
		return (0);

	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);

}
