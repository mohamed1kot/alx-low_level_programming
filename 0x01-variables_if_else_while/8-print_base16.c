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
	int init = 48;

	while (init <= 122)
	{
		putchar(init);
		init++;
		if (init == 58)
			init = 97;
	}
	putchar('\n');
	return (0);
}
