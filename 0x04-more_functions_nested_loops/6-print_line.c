#include "main.h"

/**
 * print_line - print '_' in times
 *
 * @n : input times of '_' you want to print it
 *
 * Return : none
*/

void print_line(int n)
{
	int count = 0;

	while (n > 0 && count < n)
	{
		_putchar(95);
		count++;
	}
	_putchar('\n');
}
