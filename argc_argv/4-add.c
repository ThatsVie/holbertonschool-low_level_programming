#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - calculates and prints sum of positive numbers
 * @argc: number of command line arguments including program name
 * @argv: an array of strings containing command line arguments.
 *
 * Return: 0 on success, 1 if theres a non digit argument or none
 */

int main(int argc, char *argv[])
{
	int sum;
	int count;
	int i;

	count = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
