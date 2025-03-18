#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	if (!s)
		s = "(nil)";

	printf("%s", va_arg(arg, char *));
}

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
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
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
			{
				print_t[j].func(args);
			}
			j++;
		}
		i++;
	}

	printf("\n");

}
