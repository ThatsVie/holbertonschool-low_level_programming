#include <stdio.h>

/**
 * main - prints all command line arguments
 * @argc: number of commands line arguments including program name
 * @argv: array of strings containing command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
