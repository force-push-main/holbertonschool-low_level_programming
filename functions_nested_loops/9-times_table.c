#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints 9 times tables starting from 0
 * Return: returns 1 or 0
 */

void times_table(void)
{
	int a;
	int b;
	int sum;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			sum = a * b;
			if (sum / 10 == 0)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + sum % 10);
			}
			else
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + sum / 10);
				_putchar(48 + sum % 10);
			}
		}
		_putchar('\n');
	}
}
