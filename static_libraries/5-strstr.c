#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring within a given string
 * @haystack: A pointer to the string in which we want to
 * search for the substring
 * @needle: A pointer to the substring we want to locate 
 * within the haystack string.
 * Return: pointer to the beginning of the located substring in the haystack
 * string if no match is found, it returns NULL.
 */

char * _strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
 
