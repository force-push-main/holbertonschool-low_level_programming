#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: checks if passed letter is alphabet
 * @c: passed letter to be checked
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	return (0);
}
