#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints alphabet and new line 10x
 * Return: always returns void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(i);
		_putchar('\n')
	}
}
