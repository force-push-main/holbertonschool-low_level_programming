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

	int i, len;
	char *ptr;

	if (!str)
		return (0);

	while (str[i])
	{
		i++;
		len++;
	}

	ptr = malloc(sizeof(*str) * len);

	if (!ptr)
		return (0);

	for (i = 0; i < len; i++)
		ptr[i] = str[i];

	return (ptr);

}
