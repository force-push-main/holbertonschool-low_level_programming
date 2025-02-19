#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints alphabet and new line 
 * Return: Always 0 (success)
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
