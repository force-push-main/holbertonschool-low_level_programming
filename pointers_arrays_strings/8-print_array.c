#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Description: prints n number of array items
 * @a: array to be printed
 * @n: number of items to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n]);
}
