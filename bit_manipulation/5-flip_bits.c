#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first unsigned long integer
 * @m: second unsigned long integer
 *
 * Return: number of bits that need to be flipped to get from n to m/
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differingBits = n ^ m;
	unsigned int flipCount = 0;

	while (differingBits)
	{
		differingBits &= (differingBits - 1);
		flipCount++;
	}

	return (flipCount);
}
