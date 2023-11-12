#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given index in listint_t list
 * @head: pointer to head of list
 * @idx: index at which to insert the new node
 * @n: data for new node
 * Return: on success, address if new node. On failure, NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
{
	listint_t *current, *node;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	current = *head;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			node->next = current->next;
			current->next = node;
			return (node);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}

