#include "main.h"

/**
 * print_numbers -this func print the number from 0 ot 9
 *
 * Return: none
*/

void print_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
