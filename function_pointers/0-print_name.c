#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * Description: prints name
 * @name: name to print
 * @f: function pointer
 * Return: always returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if(f && name)
		f(name);

}
