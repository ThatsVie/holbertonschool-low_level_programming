#include "main.h"

/**
 * _strlen - determines length of a string
 * @s: pointer to string
 *
 * Return: length of string
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
