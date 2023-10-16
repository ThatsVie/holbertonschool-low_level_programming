#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - calculates the smallest number fof coins to make change
 * @argc: number of command line arguments including prrogram name and change amount
 * @argv: array of strings containing command line arguments
 *
 * Return: 1 on error (incorrect number of arguments or non numeric input)
 * 0 for success
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents -= 25;
				coins++;
			}
			else if (cents % 10 < cents)
			{
				cents -= 10;
				coins++;
			}
			else if (cents % 5 < cents)
			{
				cents -= 5;
				coins++;
			}
			else if (cents % 2 < cents)
			{
				cents -= 2;
				coins++;
			}
			else if (cents % 1 < cents)
			{
				cents -= 1;
				coins++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
