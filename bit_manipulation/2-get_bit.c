#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit
 * @index: index of the bit to retrieve, starting at 0
 * Return: value of the bit at the given index, 
 * -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >=(sizeof(unsigned long int) * *))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1)
}
