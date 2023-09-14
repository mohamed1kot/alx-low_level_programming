#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator : is the string to be printed between the strings.
 * @n : number of string will be print it.
 *
 * Return: NONE.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *sep;
	char *ptr;
	int count;

	if (separator == NULL)
		sep = "";
	else
	{
		sep = (char *)separator;
	}
	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		ptr = va_arg(list, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
		}
		if (count != n - 1)
			printf(", ");
	}
	printf("\n");
	va_end(list);
}
