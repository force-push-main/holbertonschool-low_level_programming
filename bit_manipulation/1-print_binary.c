#include "main.h"

/**
 * print_bin_recursive - Entry point
 *
 * Description: prints long uint as binary string
 * @n: long uint to convert
 * Return: void
 */

void print_bin_recursive(unsigned long int n)
{
	if (n != 0)
	{
		print_bin_recursive(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - Entry point
 *
 * Description: converts uint to binary string
 * @n: long uint to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_bin_recursive(n);
}
