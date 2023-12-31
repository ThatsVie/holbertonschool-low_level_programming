#include "lists.h"
/**
 * free_listint - frees listint_t list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);

	free(head);
}
