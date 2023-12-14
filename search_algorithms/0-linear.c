#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array using Linear search.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: The first index where value is located, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;  /* Index of the current element being checked */

	/* Check for NULL array */
	if (array == NULL)
		 return (-1);

	/* Iterate through the array */
	for (index = 0; index < size; index++)
	{
		/* Print the value being checked at the current index */
		 printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		 /* Check if the current element is the desired value */
		 if (array[index] == value)
			  return (index);
	}

	 /* If the value is not found, return -1 */
	return (-1);
}
