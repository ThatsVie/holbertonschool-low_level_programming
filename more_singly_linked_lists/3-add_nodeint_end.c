#include "lists.h"

/**
 * add_nodeint_end - adds new node to end of listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer to store in new node
 *
 * Return: address of new node, or NULL if failure
 */
{
	listint_t *new = NULL;
	listint_t *current = NULL;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return (new);
}
