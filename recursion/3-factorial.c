#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: integer to find factorial of
 * Return: factorial of int or -1 if value is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
