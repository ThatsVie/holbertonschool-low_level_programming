#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to head of list
 * @n: data to be stored in new node
 *
 * Return: address of new node, or NULL if memory allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node->next_node)
		current_node = current_node->next;
	current_node->next = new_node;
	new_node->prev = current_node;

	return(new_node);
}
