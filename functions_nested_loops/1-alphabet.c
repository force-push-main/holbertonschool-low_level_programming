#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints alphabet and new line
 * Return: always returns void
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
