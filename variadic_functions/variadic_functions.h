#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct Print_Types - Struct op
 *
 * @format: char passed to indicate format
 * @print_type: relevant syntax for printf
 */

typedef struct 
{
	char char_type;
	char *syntax;
	char *type_declaration;
} Print_Types;

#endif
