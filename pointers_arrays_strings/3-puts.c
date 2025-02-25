#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: prints string then newline
 * @str: pointer to string
 * Return: always returns void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
