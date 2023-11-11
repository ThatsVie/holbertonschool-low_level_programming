#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of listint_t list
 * @head: pointer to a pointer to the head of list
 * @n: integer to be stored in the new node
 *
 * Return: address of new node, NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
