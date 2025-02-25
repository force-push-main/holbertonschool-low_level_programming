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
	char *start = s;

	while (*s)
	{
		s++;
	}

	while (s >= start)
	{
		_putchar(*s);
		s--;
	}
}
