#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: prints string
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
