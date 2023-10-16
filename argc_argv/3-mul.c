#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples 2 numbers and prints the result
 * @argc: number of command line arguments, including program name
 * @argv: array of strings containing command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
