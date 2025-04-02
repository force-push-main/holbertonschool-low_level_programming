#include "main.h"

/**
 * flip_bits- Entry point
 *
 * Description: how many bits need to be flipped to transform n
 * @n: number to tranform
 * @m: number to get to
 * Return: num of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int num_bits;

	num_bits = 0;

	diff = n ^ m;

	while (diff > 0)
	{
		num_bits += diff & 1;
		diff >>= 1;
	}

	return (num_bits);
}
