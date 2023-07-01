#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 *
 * @first: A pointer to the first node of the list to free
 */
void free_list(list_t *first)
{
	if (first)
	{
		free_list(first->next);
		if (first->str)
			free(first->str);
		free(first);
	}
}
