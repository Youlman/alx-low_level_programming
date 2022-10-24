#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a single linked list.
 * @h: the list .
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
