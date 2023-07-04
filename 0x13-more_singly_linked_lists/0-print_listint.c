#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @head: head of linklist node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		node_count++;
	}
	return (node_count);
}
