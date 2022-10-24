#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - Add a new node to the beginning of a single linked list.
 * @head: the list .
 * @n: an integer
 *
 * Return: NULL or the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head  = new_node;
	return (new_node);
}
