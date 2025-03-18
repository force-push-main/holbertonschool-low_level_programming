#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_struct - Struct op
 *
 * @char_type: char passed to indicate format
 * @func: relevant function to print arg
 */

typedef struct print_struct
{
	char char_type;
	void (*func)(va_list arg);
} Print_Types;

#endif
