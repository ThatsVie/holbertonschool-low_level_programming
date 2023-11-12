#include "lists.h"
/**
 * free_listint2 - frees listint_t and sets head to NULL, recursively
 * @head: pointer to pointer to head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
