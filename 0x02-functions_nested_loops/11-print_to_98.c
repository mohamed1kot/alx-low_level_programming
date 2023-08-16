#include "main.h"

/**
 * print_to_98 - in this program print unmbers from n to 98
 *
 * @n: input number i started from it
 *
 * Return: no return
*/

void print_to_98(int n)
{
	int temp;

	if (n > 98)
	{
		for (temp = n; temp > 98; temp--)
		{
			printf("%d, ", temp);
		}
	}
	else
	{
		for (temp = n; temp < 98; temp++)
		{
			printf("%d, ", temp);
		}
	}
	printf("98\n");
}
