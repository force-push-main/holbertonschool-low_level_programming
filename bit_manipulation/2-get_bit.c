#include "main.h"

/**
 * get_bit - Entry point
 *
 * Description: finds bit value at index
 * @n: num to search
 * @index: index of bit to find
 * Return: value of bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 20)
		return (-1);

	return (n >> index & 1);

}
