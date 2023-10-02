#include "main.h"
#include <stdio.h>
/**
 * _atoi - function recreation
 * @s: input
 * Return: 0
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		s++,
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}

		result = result * 10 + digit;
		s++;
	}

	return result * sign;
}
