#include "lists.h"

/**
 * free_dlistint - Free a list.
 * @head: the list .
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
