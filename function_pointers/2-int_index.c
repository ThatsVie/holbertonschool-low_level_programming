#include "function_pointers.h"

/**
 * int_index - searches for a specific integer in an ineger array
 * @array: pointer to the integer array to search
 * @size: number of elemetns in the array
 * @cmp: function pointer for custom comparison
 *
 * Return: index of the first occurrence of the integer or 
 * -1 if not found or in case of errors
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 0)
	{
		return (-1);
	}
	for (i=0; i < size; i++)
	{
		if (cmp(array[i] != 0)
		{
			return (i);
		}
	}
	return (-1);
}
