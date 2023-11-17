#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index index of
 * dlistint_t linked list.
 * @head: pointer to a pointer to head of doubly linked list.
 * @index: Index at which to delete the node.
 *
 * Return: on success 1, on failure -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int position = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	current = *head;
	while (current != NULL && position < index)
	{
		previous = current;
		current = current->next;
		position++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	if (current->next != NULL)
		current->next->prev = previous;
	free(current);

	return (1);
}
