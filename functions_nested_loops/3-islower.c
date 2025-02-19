#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks if passed letter is lowercase
 * @c: passed letter to be checked
 * Return: always returns void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
