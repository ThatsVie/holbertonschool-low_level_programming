#include "lists.h"
#include <stdio.h>
#include <stdlib.>

/**
 * free_list - frees the memory allocated for list_t linked list
 * @head: pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);

	free(head->str);

	free(head);
}

