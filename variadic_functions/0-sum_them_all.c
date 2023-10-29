#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculatrs the sum of a variable number of paramaters
 * @n: number of parameters to sum
 *
 * Return: sum of the provided integer arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
