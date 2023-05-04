#include "main.h"

/**
 * clear_bit - function that sets bit to 0 at given index
 * @n: pointer to unsigned long int
 * @index: index to set to 0
 *
 * Return: 1 if succeed -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	*n = (*n & ~(1UL << index));

	return (1);
