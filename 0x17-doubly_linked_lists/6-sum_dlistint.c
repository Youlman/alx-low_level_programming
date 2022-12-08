#include "lists.h"

/**
 * sum_dlistint - Sum all the data of a double linked list
 * @head: the list .
 *
 * Return: 0 or the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
