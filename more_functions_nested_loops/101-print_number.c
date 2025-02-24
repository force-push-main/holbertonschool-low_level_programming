#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: prints passed integar
 * @n: int to print
 * Return: always returns void
 */

void print_number(int n)
{
	int i, j, k;

	i = n;
	j = 1;

	while (i >= 10 || i <= -10)
	{
		j *= 10;
		i /= 10;
	}

	if (n < 0)
	{
		_putchar('-');
	}

	while (j >= 1)
	{
		k = n / j;

		if (k < 0)
		{
			k *= -1;
		}

		_putchar(48 + (k % 10));
		j /= 10;
	}
}
