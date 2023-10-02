#include "main.h"
#include <stdio.h>
/**
 * _atoi - function recreation
 * @s: input
 * Return: 0
 */

#include <stdio.h>

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return result * sign;
}

