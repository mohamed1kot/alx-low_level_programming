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
	int multi;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			multi = num1 * num2;

			if (multi <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((multi / 10) + 48);
			}
			_putchar((multi % 10) + 48);
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}
