#include "main.h"

/**
 * main - Entry point
 *
 * description: in this program i will count fibonithi
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int sum = 0;
	int count;

	printf("%d, %d, ", 0, 1);
	for (count = 2; count <= 50; count++)
	{
		sum = (count - 1) + (count - 2);
		printf("%d", sum);
		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}

	}
	return (0);
}
