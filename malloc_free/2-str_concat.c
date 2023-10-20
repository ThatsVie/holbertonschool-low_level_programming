#include "main.h"
#include "_strlen.c"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates teo string.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate
 *
 * Return: On success a pointer to the concatenated string
 * If memory allocation fails, return NULL.
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_t len1 = _strlen(s1);
	size_t len2 = _strlen(s2);

	char *concatenated = (char *)malloc(len1 + len2 + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	size_t i;
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		concatenated[len1 + i] = s2[i];
	}

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}

