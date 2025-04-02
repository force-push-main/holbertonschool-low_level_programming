#include "main.h"

/**
 * binary_to_uint - Entry point
 *
 * Description: converts binary string to uint
 * @b: binary string to convert
 * Return: uint or 0 if error
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;

	n = 0;

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);

		n <<= 1;

		if (b[i] == '1')
			n++;
	}
	return (n);
}
