#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 * listint_t linked list
 * @head: Double pointer of linked list listint_t
 * @index: Unsigned int index of the list where the new node should be deleted.
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_1 = *head;
	listint_t *temp_2 = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_1);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp_1 || !(temp_1->next))
			return (-1);
		temp_1 = temp_1->next;
		i++;
	}


	temp_2 = temp_1->next;
	temp_1->next = temp_2->next;
	free(temp_2);

	return (1);
}

