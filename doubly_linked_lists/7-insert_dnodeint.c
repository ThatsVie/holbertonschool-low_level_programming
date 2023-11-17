#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * in a doubly linked list.
 * @h: pointer to a pointer to head of doubly linked list
 * @idx: index aat which to insert new node
 * @n: data for new node
 *
 * Return: address of new node or NULL if insertion fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *temp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (!*h)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	current = *h;
	while (i < idx - 1)
	{
		if (!current)
			return (NULL);
		current = current->next;
		i++;
	}
	if (current->next)
	{
		temp = current->next;
		temp->prev = new;
		new->next = temp;
	}
	else
		new->next = NULL;
	new->prev = current;
	current->next = new;
	return (new);
}
