#include "lists.h"
/**
 * sum_dlistint - calculates sum of all data (n) of a dlistint_t linked list.
 * @head: pointer to head of doubly linked list.
 *
 * Return: sum of values in nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (!head)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
