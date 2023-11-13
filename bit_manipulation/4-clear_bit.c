#include "main.h"
/**
 * clear_bit - sets value of a bit at a given index to 0.
 * @n: pointer to unsigned long integer.
 * @index: index to set the value at, starting at 0.
 *
 * Return: on success 1
 * if error/out of bounds -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
