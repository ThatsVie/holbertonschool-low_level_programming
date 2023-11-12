#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index in listint_t list
 * @head: pointer to head of list
 * @index: index of the node to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *node_to_remove;
	unsigned int position;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (position = 0; position < index - 1; position++)
	{
		if (!current || !current->next)
			return (-1);

		current = current->next;
	}

	node_to_remove = current->next;

	if (!node_to_remove)
		return (-1);

	current->next = node_to_remove->next;
	free(node_to_remove);

	return (1);
}
