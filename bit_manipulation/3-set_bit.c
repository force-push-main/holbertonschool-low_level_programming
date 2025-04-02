#include "main.h"

/**
 * set_bit - Entry point
 *
 * Description: sets bit at index to 1
 * @n: int to flip
 * @index: index to flip at
 * Return: 1 if worked -1 if didnt
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int flipper;

	if (index > 20)
		return (-1);

	flipper = *n >> index;

	flipper |= 1;

	flipper <<= index;

	*n |= flipper;

	return (1);

}
