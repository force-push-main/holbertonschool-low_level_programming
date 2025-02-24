#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: prints triangle of n size
 * @size: size of triangle
 * Return: always returns void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = i + 1; j <= size; j++)
		{
			_putchar(' ');
		}

		for (j = size - i; i < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
