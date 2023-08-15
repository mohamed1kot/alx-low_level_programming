#include "main.h"

/**
 * print_last_digit - this function is print the last digit in num
 *
 * @n : input number in extraction last number
 *
 * Return: Always last number
*/

int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = (n % 10);
		return (last);
	}
	last = (((-1) * n) % 10);
	_putchar(last + '0')
	return (last);
}
