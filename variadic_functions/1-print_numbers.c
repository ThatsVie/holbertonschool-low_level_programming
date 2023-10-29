#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- prints numbers
 * @separator: string to be printed between the numbers
 * @n: number of integer values to print
 * @...: variadic arguments representing the numbers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int numbers;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", numbers);
			else
				printf("%d", numbers);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", numbers);
			else
				printf("%d%s", numbers, separator);
		}
	}
	va_end(args);
}
