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
	int i, j;

	i = 0;
	j = n;

	while (i < n)
	{
		while (j < n)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		_putchar('\n');

		i++;
		j = n - i;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
