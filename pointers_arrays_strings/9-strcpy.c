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
	int len, i;

	len = 0;
	i = 0;

	while (src[len])
	{
		len++;
	}

	while (i <= len)
	{
		*dest = src[i];
		dest++;
		i++;
	}

	return (dest);
}
