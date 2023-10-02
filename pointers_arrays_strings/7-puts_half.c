#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int length = strlen(str);

	if (length % 2 == 0)
	{
		int half_length = length / 2;
		for (int i = half_length; i < length; i ++)
		{
			putchar(str[i]);
		}
	}
		else
		{
			int half_length = (length - 1) / 2;
			for (int i = half_length + 1; i < length; i++)
			{
				putchar(str[i]);
			}
		}
		putchar('\n');
	}

	
