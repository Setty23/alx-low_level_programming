#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the  pointer to the front of list_t list
 * @str: pointer to the new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;
	
	i= 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	(*head) = new;

	return (new);
}

