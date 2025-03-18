#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - entry point
 *
 * Description: janky printf
 * @format: format for printf
 * Return: always returns void
 */

void print_all(const char * const format, ...)
{
	Print_Types print_t[] = {
		{'c', "%c", "char"},
		{'i', "%d", "int"},
		{'f', "%f", "float"},
		{'s', "%s", "char *"}
	};

	int i, j;
	va_list args;

	va_start(args, format);

	i = 0;

	while (format[i])
	{
		j = 0;

		while (j < 3)
		{
			if (format[i] == print_t[j].char_type)
				printf(print_t[j].syntax, va_arg(args, char *));
			j++;
		}
		i++;
	}

	printf("\n");

}
