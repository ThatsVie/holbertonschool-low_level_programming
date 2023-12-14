#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	/* Check for NULL array or empty array */
	if (array == NULL || size == 0)
		return (-1);

	/* Binary search loop */
	while (left <= right)
	{
		/* Calculate the middle index of the current subarray */
		mid = left + (right - left) / 2;

		/* Print the current subarray being searched */
		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		/* Check if the value is at the middle index */
		if (array[mid] == value)
			return (mid);

		/* If value is in the left half, update the right boundary */
		else if (array[mid] > value)
			right = mid - 1;
		/* If value is in the right half, update the left boundary */
		else
			left = mid + 1;
	}

	/* If the value is not present in the array */
	return (-1);
}

