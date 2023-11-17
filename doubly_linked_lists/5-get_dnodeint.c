#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node in a doubly linked list.
 * @head: pointer to head of list
 * @index: index of the node to retrieve
 *
 * Return: address of the node at specified index
 * or NULL if index is out of bounds
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head)
		return (NULL);

	current = head;

	for (i = 0; current->next && i < index; i++)
		current = current->next;

	if (i < index)
		return (NULL);

	return (current);
}
