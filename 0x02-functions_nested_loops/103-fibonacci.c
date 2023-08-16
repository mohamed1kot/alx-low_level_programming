#include "main.h"

/**
 * main - entry n point
 *
 * description: A c program is count fibonaci sequance
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long  count;
	unsigned long new = 0;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;

	while (1)
	{
		new = fib1 + fib2;
		if (new > 4000000)
		{
			break;
		}
		if ((new % 2) == 0)
		{
			count += new;
		}
		fib1 = fib2;
		fib2 = new;
	}
	printf("%.0f\n", count);
	return (0);
}
