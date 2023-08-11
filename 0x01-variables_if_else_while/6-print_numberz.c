#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program is print a sungle numbers in base 10
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int init = 0;

	while (init < 10)
	{
		putchar(init + '0');
		init++;
	}
	putchar('\n');
	return (0);
}
