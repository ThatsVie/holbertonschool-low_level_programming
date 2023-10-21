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

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}

	return (arr);
}
