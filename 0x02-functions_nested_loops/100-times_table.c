#include "main.h"

/**
 * print_times_table - print table
 *
 * @n: input num
*/

void print_times_table(int n)
{
	int num1;
	int num2;
	int multi;

	if (n <= 15 && n >= 0)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');
				multi = num1 * num2;
				if (multi <= 9)
				{
					_putchar(' ');
				}
				if (multi <= 99)
				{
					_putchar(' ');
				}
				if (multi >= 100)
				{
					_putchar((multi / 100) + 48);
					_putchar((multi / 10) % 10 + 48);
				}
				else if (multi <= 99 && multi >= 10)
				{
					_putchar((multi / 10) + 48);
				}
				_putchar((multi % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
