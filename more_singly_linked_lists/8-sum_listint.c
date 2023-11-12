#include "lists.h"

/**
 * sum_listint - returns the sum of all he data of linked list
 * @head: pointer to head of list
 *
 * Return: The sum of all integer data in the linked list.
 * If the list is empty, returns 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum+= head->n;
		head = head->next;
	}

	return (sum);
}
