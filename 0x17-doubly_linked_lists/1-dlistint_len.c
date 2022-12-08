#include "lists.h"

/**
 * dlistint_len - prints the length elements of a double linked list.
 * @h: the list .
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
