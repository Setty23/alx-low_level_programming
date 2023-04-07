#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - print product of multiplication of two arguments
* @argc: counter of arguments
* @argv: arguments
* Return: (Success)
*/

int main(int argc, char *argv[])
{
	int money[] = {25, 10, 5, 2, 1};
	int i = 0, count_coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents)
	{
		cents -= money[i];
		count_coins += 1;
		if (cents < 0)
		{
			cents += money[i];
			count_coins -= 1;
			i += 1;
		}
	}
	printf("%d\n", count_coins);
	return (0);
}
