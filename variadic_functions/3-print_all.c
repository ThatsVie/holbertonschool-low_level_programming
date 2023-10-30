#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char = prints a character
 * @args: va_list containing the character to print
 */

void print_char(va_list args)
{
	printf("%c", va_args(args, int));
}

/**
 * print_int - prints an integer
 * @args: va_list containing integer to print
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list containing the float to print
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments to be printed
 * @...: variadic arguments to be printed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int a, b;
	char *s1 = "";
	char *s2 = ", ";

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		b = 0;
		while (ops[b].c != '\0')
		{
			if (ops[b].c == format[a])
			{
				printf("%s", s1);
				ops[b].f(list);
				s1 = s1;
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(list);
}
	
