#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character to standard output
 * @c: characted to be printed
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c);
{
	return write (1, &c, 1);
}

int main(void)
{
	char c [] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');

	return (0);
}
