#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program is print a serious of lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int init = 0;

	while (init <= 9)
	{
		putchar(init);
		if (init != 9)
			putchar(',');
			putchar(' ');
		init++;
	}
	putchar('$');
	return (0);
}
