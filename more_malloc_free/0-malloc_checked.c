#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc, exits on failure
 * @b: number of bytes to allocate
 *
 * Return: on success, pointer to allocated memory
 * if malloc fails, terminates with status 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
