#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node to the index idx of linked list.
 * @head: the list .
 * @index: the index
 *
 * Return: NULL or the address of the new element
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node = *head, *tmp;
	unsigned int i = 0;

	if (delete_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(delete_node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (delete_node == NULL)
			return (-1);

		delete_node = delete_node->next;
	}

	tmp = delete_node->next;
	delete_node->next = tmp->next;
	free(tmp);

	return (1);
}
