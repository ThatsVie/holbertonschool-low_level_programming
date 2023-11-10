#include "lists.h"

/**
 * list_len - calculates the number of elements in list_t.
 * @h: head of list
 *
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
