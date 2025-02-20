#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print every combination of 2 digits once
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = 1 + a; b <= 9; b++)
		{
			putchar(a + 48);
			putchar(b + 48);
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
