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
	char *ptr;
	unsigned int count;

	if (separator == NULL || *separator == 0)
		ptr = "";
	else
		ptr = (char *) separator;
	va_start(l_arg, n);

	if (n > 0)
		printf("%d", va_arg(l_arg, int));
	for (count = 1; count < n; count++)
		printf("%s%d", ptr, va_arg(l_arg, int));
	printf("\n");
	va_end(l_arg);
}
