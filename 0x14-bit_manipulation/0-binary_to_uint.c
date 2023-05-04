#include"main.h"

/**
  * binary_to_uint - function that converts a binary number to an unsigned int
  * @b: The binary string to converted
  *
  * Return: The int  converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	for (j = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			j = (j << 1) | 1;
		else if (b[i] == '0')
			j <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (j);
}
