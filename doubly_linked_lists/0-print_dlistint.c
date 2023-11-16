#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list and 
 * returns the number of nodes
 * @h: head of list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h);
{
	int node_count = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	
	return (node_count);
}
