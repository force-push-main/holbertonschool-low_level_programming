#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: prints every even number char of string
 * @str: var one to be swapped with
 * Return: always returns void
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
