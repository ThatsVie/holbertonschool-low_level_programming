#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocates memory for copy of input string 'str'
 * @sstr: string to duplicate
 *
 * Return: On success, a pointer to the duplicate string
 * If 'str' is NULL or if memory allocation fails return NULL
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t length = strlen(str);
	char *duplicate = (char *)malloc(length + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
