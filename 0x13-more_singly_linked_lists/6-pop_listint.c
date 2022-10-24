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

	if (*head == NULL)
		return (0);

	node_delete = *head;
	*head = (*head)->next;

	return (node_delete->n);
}
