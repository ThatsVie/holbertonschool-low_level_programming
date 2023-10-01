#include "main.h"
/**print_rev - prints string in reverse then new line
 * @str: string
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	i = i - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
