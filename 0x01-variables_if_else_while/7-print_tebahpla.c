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
	char init = 'z';

	while (init >= 'a')
	{
		putchar(init);
		init--;
	}
	putchar('\n');
	return (0);
}
