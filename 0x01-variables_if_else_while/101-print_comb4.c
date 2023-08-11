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
	int set3;

	while (set1 <= 9)
	{
		set2 = 0;
		while (set2 <= 9)
		{
			set3 = 0;
			while (set3 <= 9)
			{
				if (set1 != set2 && set2 != set3 && set1 < set2 && set2 < set3)
				{
					putchar(set1 + 48);
					putchar(set2 + 48);
					putchar(set3 + 48);
					if (set1 != 8 || set2 != 8 || set3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				set3++;
			}
			set2++;
		}
		set1++;
	}
	putchar('\n');
	return (0);
}
