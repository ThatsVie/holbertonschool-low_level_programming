#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of arguments to print
 */

void print_all (const char * const format, ...)
{
	va_list list;
	int a = 0, b = 0;
	char *sep =", ";
	char *str;

	va_start(list, format);

	while (format && format[b])
		b++;
	while (format && format[a])
	{
		if (a == (b -1))
		{
			sep = "";
		}
		switch (format[a])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), sep);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		a++;
	}
		printf("\n");
		va_end(list);
}
