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

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (* s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s >= '0' && *s <='9')
	{
		if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && (*s - '0') > (INT_MAX % 10)))
		{
			if (sign == 1)
			{
				return INT_MAX;
			}
			else
			{
				return INT_MIN;
			}
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return result * sign;
}
