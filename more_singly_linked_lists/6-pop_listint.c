#include "lists.h"

/**
 * pop_listint - deletes head node of listint_t list and returns its data
 * @head: pointer to pointer to head of list
 *
 * Return: data of removed head node. If list is empty returns 0
 */

int pop_listint(listint_t **head)
{
	listint_t *deleted_node;
	int deleted_data;

	if (!head || !*head)
		return (0);

	deleted_node = *head;
	deleted_data = (*head)->n;
	*head = deleted_node->next;
	free(deleted_node);

	return (deleted_data);
}
