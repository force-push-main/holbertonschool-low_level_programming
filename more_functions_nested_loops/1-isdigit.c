#include "main.h"

/**
 * _isdigit - entry point
 * @c: the character to be check
 *
 * description: checks if a char is 0 - 9
 * @c: the char to be checked
 * Return: if c is between or equal to 0-9 return 1, else return 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
