#include "lists.h"

/**
 * get_dnodeint_at_index - Get a node of a double linked list at index
 * @head: the list .
 * @index: the position
 *
 * Return: NULL or the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
