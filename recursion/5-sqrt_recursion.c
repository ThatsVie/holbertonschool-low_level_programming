#include "main.h"
/**
 * _sqrt_recursion - returns natural square root
 * @n: number for which to find the square root
 * Return: square root if exists, or -1 if not
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function to recursively find square root
 * @n: number for which to find the square root
 * @guess: current guess for square tooy
 * Return: square root if exists, or -1 if not
 */

int find_sqrt(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
	{
		return (guess);
	}

	if (square > n || guess > n / guess)
	{
		return (-1);
	}

	return (find_sqrt(n, guess + 1));
}
