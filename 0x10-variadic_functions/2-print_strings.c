#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/***/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v_arg;
	unsigned int count;

	if (separator == NULL || n == 0)
		return;
	va_start(v_arg, n);
	for (count = 0; count < n; count++)
	{
		if (!va_arg(v_arg, const unsigned int))
			printf("(nil)");
		else
		{
			printf("%s", va_arg(v_arg, char *));
		}
		if (count != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
