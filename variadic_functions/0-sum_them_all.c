#include <stdarg.h>

/**
 * sum_them_all - entry point
 *
 * Description: sums all passed ints
 * @n: number of ints to sum
 * @b: second int
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}
