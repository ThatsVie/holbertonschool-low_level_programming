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
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

