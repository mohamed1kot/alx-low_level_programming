#include "main.h"

/**
 * print_square - print squre from # characther
 *
 * @size : input
 *
 * Return :none
*/

void print_square(int size)
{
	int count1;
	int count2;

	if (size > 0)
	{
		for (count1 = 0; count1 < size; count1++)
		{
			for (count2 = 0; count2 < size; count2++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
