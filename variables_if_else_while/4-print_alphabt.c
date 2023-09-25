#include <stdio.h>
/**
 * main - print alphabet without q and e
 *
 * Return: 0
 */
int main (void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
		putchar(n);
		}
	}
	putchar ('\n');

	reurn (0);	
