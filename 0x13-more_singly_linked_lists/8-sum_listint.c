#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * sum_listint - Sum all the data of a single linked list
 * @head: the list .
 *
 * Return: 0 or the sum
 */

int sum_listint(listint_t *head)
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
