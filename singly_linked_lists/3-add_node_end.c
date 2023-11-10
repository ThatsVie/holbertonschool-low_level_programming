#include "lists.h"
/**
 * add_node_end - adds a new node to the end of linked list
 * @head :pointer to head of linked list
 * @str: string to be stored in new node
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = NULL;
	list_t *iterator = NULL;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	if (str != NULL)
	{
		end_node->str = strdup(str);
		end_node->len = strlen(str);
	}
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	iterator = *head;
	while (iterator->next != NULL)
	{
		iterator = iterator->next;
	}

	iterator->next = end_node;

	return (end_node);
}
