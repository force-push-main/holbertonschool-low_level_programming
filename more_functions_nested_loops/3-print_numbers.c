#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints chars 0 - 9
 * Return: returns void
 */

void print_numbers(void)
{
	char i;

	i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
