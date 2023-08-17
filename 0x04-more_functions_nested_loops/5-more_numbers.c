#include "main.h"

/**
 * more_numbers -print numbers from 0 to 14 as 10 times
 *
 * Return: none
*/

void more_numbers(void)
{
	int times;
	int num;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + 48);
			}
				_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
