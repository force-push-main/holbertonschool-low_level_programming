#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: checks if number is pos, neg, zero
 * @n: passed jumber to be checked
 * Return: returns 1, -1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar(43);
		return (1);
	else if (n == 0)
		_putchar(48);
		return (0);
	_putchar(45);
	return (-1);
}
