#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated up to n bytes
 * @n: number of bytes from s2 to concatenate
 *
 * Return: on sucess, a pointer to newly allocated concatenated string
 * if allocation fails, returns NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2;

	if (s1 == NULL)
		len1 = 0;
	else 
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;
	
	concatenated = (char *)malloc(len1 + n + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strncpy(concatenated, s1, len1);
	}

	strncpy(concatenated + len1, s2, n);
	concatenated[len1 + n] = '\0';

	return (concatenated);
}
