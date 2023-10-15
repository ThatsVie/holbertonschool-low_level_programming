#include "main.h"
/**
 * is_prime_number - determines if number is prime
 * @n: given number
 * Return: 1 if number is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	else
		return (prime_helper(n, 2));
}

/**
 * prime_helper - recursive calculation for is_prime_number
 * @base: n
 * @divisor: integer checks if base is divisible by anything but 1 and self
 * Return: 1 if base is prime, 0 if not
 */

int prime_helper(int base, int divisor)
{
	if (divisor == base)
		return (1);
	else if (base % divisor == 0)
		return (0);
	else
		return (prime_helper(base, divisor + 1));
}

