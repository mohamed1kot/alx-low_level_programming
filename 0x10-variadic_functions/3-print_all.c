#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  a function that prints anything.
 *
 * @format: is a list of types of arguments passed to the function.
 *
 * Return: NONE.
*/

void print_all(const char * const format, ...)
{
	va_list list;
	char *sep = ", ";
	char *ptr;
	int n = 0;
	int l = 0;

	va_start(list, format);
	while (format && format[n])
		n++;
	while (fromat && format[l])
	{
		if (l == n - 1)
			sep = "";
		switch (format[l])
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
				ptr = va_arg(list, char *);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s%s", ptr, sep);
				break;
		}
		l++;
	}
	printf("\n");
	va_end(list);
}
