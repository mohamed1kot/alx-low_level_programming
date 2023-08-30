#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n : input number
 *
 * Return: factorial of number (n)
*/

int factorial(int n)
{
	int fac;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		fac = n * factorial(n - 1);
	}
	return (fac);
}
