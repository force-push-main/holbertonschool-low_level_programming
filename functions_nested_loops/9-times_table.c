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
		for (b = 0; b <= 9; b++)
		{
			sum = a * b;
			if (sum / 10 == 0)
			{
				_putchar(48 + sum % 10);
				_putchar(44);
				_putchar(' ');
			}
			else
			{
				_putchar(48 + sum / 10);
				_putchar(48 + sum % 10);
				_putchar(44);
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
