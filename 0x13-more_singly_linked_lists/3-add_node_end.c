#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Add a new node to the end of a single linked list.
 * @head: the list .
 * @str: the string to add
 *
 * Return: NULL or the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str_add;
	int len = 0;
	list_t *new_node, *tail;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_add = strdup(str);
	if (str_add == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str_add[len])
		len++;

	new_node->str = str_add;
	new_node->len = len;
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
