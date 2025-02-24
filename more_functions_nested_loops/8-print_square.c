#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: prints n sized square
 * @size: size of square
 * Return: always returns void
 */

void print_square(int size)
{
	int i, j;

	i = 1;
	j = 1;

	while (i <= size)
	{
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
		j = 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
