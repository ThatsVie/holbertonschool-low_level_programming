#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: input
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
