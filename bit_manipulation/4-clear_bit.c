#include "main.h"

/**
 * clear_bit - Entry point
 *
 * Description: turns bit to 0 at index
 * @n: num to transform
 * @index: index to transform at
 * Return: 1 or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int flipper;

	if (index > 20)
		return (-1);

	if ((*n >> index | 0) == 0)
		return (1);

	flipper = 1;

	flipper <<= (index + 1);

	*n ^= flipper;

	return (1);

}
