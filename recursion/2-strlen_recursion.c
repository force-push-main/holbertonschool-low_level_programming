#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: finds length of string recursively
 * @s: string to be searched
 * Return: returns length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 +  _strlen_recursion(s + 1));

	return (0);
}
