#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char.
 * @size: Size of array.
 * @c: Character to initialize the array with.
 *
 * Return: A pointer to the created and initialized array
 * or NULL if allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *char_array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	char_array = (char*)malloc(size * sizeof(char));

	if (char_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		char_array[i] = c;
	}

	return (char_array);
}
