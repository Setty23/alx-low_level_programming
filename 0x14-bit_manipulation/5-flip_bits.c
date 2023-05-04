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
	unsigned long int num;
	unsigned long int i;

	num = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	
		if (((m ^ n) >> i) & 1)
			num++;
	}
	return (num);
}

