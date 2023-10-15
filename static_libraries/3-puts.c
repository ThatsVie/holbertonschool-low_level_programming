#include "main.h"
/**
 * _puts - prints string, then new line
 * @s: string to be printed
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
