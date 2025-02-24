#include "main.h"

/**
 * more_numbers - Entry point
 * Description: prints 0-14 10 times plus newline
 * Return: always returns void
 */

void more_numbers(void)
{
	int i, j, n, n2;

	i = 0;
	j = 0;

	while (j <= 10)
	{
		while (i <= 14)
		{
			if (i >= 10)
			{
				n = i / 10;
				_putchar(n + 48);
			}
			n2 = i % 10;
			_putchar(n2 + 48);
			i++;
		}
		_putchar('\n');
		j++;
		i = 0;
	}
}
