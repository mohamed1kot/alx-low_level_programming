#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - this function is count sum of numbers.
 *
 * @n : the input of a constant unsigned value.
 *
 * Return: sum of variables.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list l_arg;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(l_arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(l_arg, const unsigned int);
	}
	return (sum);
}
