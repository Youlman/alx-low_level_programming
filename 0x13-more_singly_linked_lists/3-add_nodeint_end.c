#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node to the end of a single linked list.
 * @head: the list .
 * @n: an integer
 *
 * Return: NULL or the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new_node;
	}

	return (*head);
}
