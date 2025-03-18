#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_char - entry point
 *
 * Description: prints char
 * @arg: arg to be printed
 * Return: always returns void
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - entry point
 *
 * Description: prints int
 * @arg: arg to be printed
 * Return: always returns void
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - entry point
 *
 * Description: prints float
 * @arg: arg to be printed
 * Return: always returns void
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - entry point
 *
 * Description: prints string
 * @arg: arg to be printed
 * Return: always returns void
 */

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(nil)";

	printf("%s", s);
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

	char *separator;

	va_list args;

	va_start(args, format);

	separator = "";
	i = 0;

	while (format && format[i])
	{
		printf("%s", separator);
		separator = "";
		j = 0;

		while (j < 4)
		{
			if (format[i] == print_t[j].char_type)
			{
				print_t[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");

}
