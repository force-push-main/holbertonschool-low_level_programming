#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * Description: prints sum of diagonals in square matrix
 * @a: array
 * @size: size of square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, k, d1, d2;

	d1 = 0;
	d2 = 0;
	k = 1;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		d1 += a[i];
		d2 += a[(size * k) - k];
		k++;
	}

	printf("%d, %d\n", d1, d2);
}
