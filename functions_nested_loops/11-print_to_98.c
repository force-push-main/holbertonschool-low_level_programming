#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: prints all natural numbers from n to 98
 * @n: passed number to begin count
 * Return: returns 1 or 0
 */

void print_to_98(int n)
{
	int count;

	count = ((n < 98) - (n > 98));

	printf("%d", n);
	for (; n != 98; n += count)
	{
		printf("%d, ", n);
	}
	printf("98\n");
}
