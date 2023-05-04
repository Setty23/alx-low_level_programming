#include "main.h"

/**
 * flip_bits - function that gets the number of bits flipped form n to m
 * @n: initial long unsigned int
 * @m: secondary long unsigned int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = 0, count = 0;

	j = n ^ m;
	while (j)
	{
		if (j & 1)
			count++;
		j >>= 1;
	}

	return (count);
}
