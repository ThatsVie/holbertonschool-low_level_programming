#include "main.h"
/**
 * print_most_numbers - prints from 0 to 9 excluding 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar ('\n');
}
