#include "3-calc.h"

/**
 * op_add - function that adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: dividend
 * @b: divisor
 *
 * Return: result of dividing a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that computes the modulo of two integers
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the remainder when a is divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
