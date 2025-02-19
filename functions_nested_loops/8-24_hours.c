#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every min of jacks day
 * Return: returns void
 */

void jack_bauer(void)
{
	int i;
	int h;
	int hh;
	int m;
	int mm;

	h = 48;
	hh = 48;
	m = 48;
	mm = 48;

	for (i = 0; i <= 1440; i++)
	{
		_putchar(h);
		_putchar(hh);
		_putchar(58);
		_putchar(m);
		_putchar(mm);
		_putchar('\n');
		if (mm <= 56)
		{
			mm++;
		}
		else
		{
			mm = 48;
			m++;

			if (m >= 55)
			{
				m = 48;
				hh++;
				if (hh >= 58)
				{
					hh = 48;
					h++;
				}
			}
		}
	}
}
