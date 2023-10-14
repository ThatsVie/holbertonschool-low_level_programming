#include "main.h"
/**
 * is_prime_number - determines if number is prime
 * @n: given number
 * Return: value
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - helper function recursively checks if n is prime 
 * @n: number to check
 * @divisor: divisor being tested
 */

int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor + 1);
}
