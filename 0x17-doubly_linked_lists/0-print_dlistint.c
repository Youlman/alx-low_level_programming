#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list.
 * @h: the list .
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
