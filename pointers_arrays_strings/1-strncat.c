#include "main.h"
/**
 * _strncat - concatenates two strings at n bytes
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */

char *strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (int i = 0; src[i] = src[i] != '\0' && i < n; i++)
	{
		dest[dest_len +i] = src[i];
	}

	dest[dest_len + n] = '\0';

	return dest;
}

