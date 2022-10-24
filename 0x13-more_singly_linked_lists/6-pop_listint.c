#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * pop_listint - Delete the head node of a single linked list.
 * @head: the list .
 *
 * Return: 0 or the head node's node
 */

int pop_listint(listint_t **head)
{
	listint_t *node_delete;
	int head_node_data;

	if (*head == NULL)
		return (0);

	node_delete = *head;
	*head = (*head)->next;
	head_node_date = node_delete->n;

	free(node_delete);

	return (node_delete->n);
}
