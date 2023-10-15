#include "main.h"
/**
 * _strcpy - copies value of a string
 * @src: pointer to source string from which we want to copy
 * characters 
 * @dest: pointer to destination string where the characters
 * will be copied
 * Return: pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
