#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers from min to max
 * @min: minimum value,inclusive,for the array
 * @max: maximum value,inclusive,for the array
 *
 * Return: on success, a pointer to the newly created array
 * if 'mim' is greater than 'max' or if allocation fails returns NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	size = ((max + 1) - min);

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * size);

	if (arr)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = min + i;
		}
		return (arr);
	}
	else
		return (NULL);
}
