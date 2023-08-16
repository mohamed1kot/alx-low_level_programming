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
	int count = 1;
	int new;
	int fib1 = 0;
	int fib2 = 1;

	for (count = 1; count <= 50; count++)
	{
		new = fib1 + fib2;
		printf("%1u", new);
		fib1 = fib2;
		fib2 = new;
		if (count < 50)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
