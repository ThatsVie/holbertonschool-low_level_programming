#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurrence in the string s of any of
 * the bytes in string accept
 * @s: pointer to string s in which we want to search for matching
 * characters
 * @accept: pointer to string accept containing characters to search for
 * in s string
 * Return: a pointer to the character in s that matches one of the characters
 * in accept, or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
