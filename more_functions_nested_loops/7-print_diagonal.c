#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: prints \ \n  n times
 * @n: number of times to print \
 * Return: always returns void
 */


void print_diagonal(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		while (i + 1 < n)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
