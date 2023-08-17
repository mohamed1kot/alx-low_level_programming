#include "main.h"

/**
 * print_diagonal - print ' ' in times
 *
 * @n : input times of ' ' you want to print it
 *
 * Return : none
*/

void print_diagonal(int n)
{
	int count1;
	int count2;
	if (n > 0)
	{
		for (count1 = 1; count1 <= n; count1++)
		{
			for (count2 = 1; count2 < count1; count2++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
