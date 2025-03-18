#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - entry point
 *
 * Description: prints passed nums separated by separator
 * @n: number of ints passed
 * @separator: string to separate ints
 * Return: always returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (i == n - 1)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}

	printf("\n");

}
