#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Get a node of a single linked list at index
 * @head: the list .
 * @index: the position
 *
 * Return: NULL or the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
