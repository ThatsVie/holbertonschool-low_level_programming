#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: pointer to head of list
 * @index: the index of nth node, starting at 0
 *
 * Return: pointer to the node at nth index. If it doesnt exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	for (current = head; current != NULL && index > 0; index--)
		current = current->next;
	return (current);
}
