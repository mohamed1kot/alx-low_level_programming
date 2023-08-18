#include "main.h"

/**
 * print_triangle - this finc print triangle from "#"
 *
 * @size : input size of triangle
 *
 * Return: None
*/

void print_triangle(int size)
{
	if (size > 0)
	{
		int count1;
		int count2;
		int count3;

		for (count1 = 1; count1 <= size; count1++)
		{
			for (count2 = 1; count2 <= size - count1; count2++)
			{
				_putchar(32);
			}
			for (count3 = 1; count3 <= count1; count3++)
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
