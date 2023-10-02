#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,then new line
 * @a: input
 * @n: input
 * Return: 0
 */

void print_array(int *a, int n)
{
	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (int i = 0; i < n - 1; i ++)
	{
		printf("%d. ", a[i]);
	}
		printf("d\n", a[n - 1]);
}
