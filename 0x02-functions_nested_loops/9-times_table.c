#include "main.h"

/**
 * times_table - print a table from 1 to 9
 *
 * descrption: in this program i will count time table
 *
 * Return: no return
*/



void times_table(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			_putchar((num1 * num2) + 48);
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}
