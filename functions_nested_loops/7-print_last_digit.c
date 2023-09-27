#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer for function
 *
 * Return: x
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		x = -x;
	_putchar (x + '0');
	return (x);
}

