#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: print string in reverse
 * @s: string to be reversed
 * Return: always returns void
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
}
