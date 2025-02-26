#include "main.h"

/**
 * _strcpy - Entry point
 *
 * Description: copies string to buffer
 * @dest: buffer to hold string
 * @src: string to be stored
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = *src;

	dest = start;

	return (dest);
}
