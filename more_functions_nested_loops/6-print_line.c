#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: prints alphabet and new line
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
