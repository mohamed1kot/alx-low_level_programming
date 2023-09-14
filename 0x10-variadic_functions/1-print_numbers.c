#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator : is the string to be printed between numbers.
 * @n : count of number want to print it.
 *
 * Return: NULL.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l_arg;
	unsigned int count;

	if (separator == NULL)
		return;
	va_start(l_arg, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(l_arg, const unsigned int));
		if (count != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
