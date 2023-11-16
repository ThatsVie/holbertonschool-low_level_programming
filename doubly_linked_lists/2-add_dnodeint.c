#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to head of list.
 * @n: data to be stoeed in new node.
 *
 * Return: address of new node , or NULL if memory allocation fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
