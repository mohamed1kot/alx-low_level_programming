#include "main.h"

/**
 * print_number - print unumber
 *
 * @n : this is number i want to print it
 *
 * Return : none
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + 48);
}
