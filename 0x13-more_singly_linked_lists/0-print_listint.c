#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints all elements of a listnt_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
