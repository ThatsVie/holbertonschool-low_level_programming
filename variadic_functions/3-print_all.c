#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of arguments to print
 */

void print_all (const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0;

	va_start (args, format);

	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep va_args, double));
		}
		else if (format[i] == 's')
		{
			char *s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("%s(nil)", sep);
			}
			else
			{
				printf("%s%s", sep, s);
			}
		}

		sep = ",";
		i++;
	}

	printf("\n");
	va_end(args);
}
