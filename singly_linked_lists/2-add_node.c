#include "lists.h"
/**
 * add_node - adds new node to beginning of list
 * @head: pointer to the head of list
 * @str: string to be stored in new node
 *
 * Return: On success, address of the new node
 * on failure, NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
