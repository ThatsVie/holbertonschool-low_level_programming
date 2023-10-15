#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: integer for which we want to calculate absolute value
 * Return: positive value of n whether negative or non negative
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
