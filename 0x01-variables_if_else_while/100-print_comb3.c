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

	while (set1 <= 9)
	{
		set2 = 0;
		while (set2 <= 9)
		{
			if (set1 != set2 && set1 < set2)
			{
				putchar(set1 + 48);
				putchar(set2 + 48);
				if (set1 != 8 || set2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			set2++;
		}
		set1++;
	}
	putchar('\n');
}
