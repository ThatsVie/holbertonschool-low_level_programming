#include "3-calc.h"
/**
 * main - entry point for calculator program
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: 0 for success or error code for error cases
 */

int main(int argc, char *argv[])
{
	int a, b, answer;
	op_t obj;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	obj.f = get_op_func(argv[2]);

	if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (obj.f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	answer = obj.f(a, b);
	printf("%d\n", answer);

	return (0);
}
