#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a single linked list.
 * @h: the list .
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count_nodes = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		count_nodes++;
		current = current->next;
	}

	return (count_nodes);
}
