#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the length elements of a single linked list.
 * @h: the list .
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count_nodes = 0;

	while (h)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
