#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: prints underscores n times
 * @n: number of times to print underscore
 * Return: always returns void
 */

void print_line(int n)
{
	int i;
	char u;

	i = 0;
	u = '_';

	while (i < n)
	{
		_putchar(u);
		i++;
	}
	_putchar('\n');
}
