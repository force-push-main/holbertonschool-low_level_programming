#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - entry point
 *
 * Description: prints strings separated by separator
 * @n: number of strings to print
 * @separator: string to use as separator
 * Return: always returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);
		if (!string)
			string = "(nil)";
		if (!separator)
			printf("%s", string);
		else if (i == n - 1)
			printf("%s", string);
		else
			printf("%s%s", string, separator);
	}

	printf("\n");

}
