#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks if c is uppercase
 * @c: the letter to be checked
 * Return: returns 1 if upper, 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
