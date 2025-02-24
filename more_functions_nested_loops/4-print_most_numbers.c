#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: prints numbers 0-9, skipping 2 and 4
 * Return: always returns void
 */

void print_most_numbers(void)
{
	char i;

	i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
