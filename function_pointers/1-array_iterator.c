#include "function_pointers.h"

/**
 * array_iterator - applies a given fuction to each element of an integer array
 * @array: pointer to integer array
 * @size: number of elements in array
 * @action: function pointer that specifies the action to be applied to
 * each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
