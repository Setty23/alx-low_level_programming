#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to a pointer to the head of listint_t list
 * @n: Const int for data to be added
 *
 * Return: List with new node for listint_t list, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new  = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

