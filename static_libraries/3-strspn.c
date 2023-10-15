#include "main.h"
/**
 * _strspn - calculates length of a prefix substring
 * @s: pointer to string in which we want to find prefix
 * @accept: pointer to string containing acceptable characters
 * Return: the length of prefix substring as an unsigned integer.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *acceptPtr = accept;

		while(*acceptPtr != '\0')
		{
			if (*s == *acceptPtr)
			{
				break;
			}
			acceptPtr++;
		}

		if (*acceptPtr == '\0')
		{
			return (count);
		}

		count++;
		s++;
	}

	return (count);
}
