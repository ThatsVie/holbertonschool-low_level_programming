#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes to zero
 * @nmeb: number of elements in the array
 * @size: size in bytes of each elemt
 *
 * Return: on success, a pointer to the allocated and initialized memory
 * if 'nmemb' or 'size' is 0, or if 'malloc' fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
