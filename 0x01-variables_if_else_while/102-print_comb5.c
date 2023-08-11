#include <stdio.h>

/**
 * main - Entry Point
 *
 * description: A C program Write a different combinations of two digits
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int set1 = 0;
	int set2;

	while (set1 <= 99)
	{
		set2 = set1;
		while (set2 <= 99)
		{
			putchar((set1 / 10) + 48);
			putchar((set1 % 10) + 48);
			putchar(' ');
			putchar((set2 / 10) + 48);
			putchar((set2 % 10) + 48);
			if (set1 != 98 || set2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			set2++;
		}
		set1++;
	}
	putchar('\n');
	return (0);
}
