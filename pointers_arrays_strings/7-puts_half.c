#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: prints half a string
 * @str: string to be checked
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;

	while (str[i])
	{
		i++;
	}

	if (i - 1 % 2 == 0)
	{
		n = (i - 1) / 2;

		while (str[n])
		{
			_putchar(str[n]);
			n++;
		}
	}

	else if (i - 1 % 2 == 1)
	{
		n = i / 2;

		while (str[n])
		{
			_putchar(str[n]);
			n++;
		}
	}
}
