#include <stdio.h>
/**
 * main - prints number of command line arguments
 * @argc: count of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
