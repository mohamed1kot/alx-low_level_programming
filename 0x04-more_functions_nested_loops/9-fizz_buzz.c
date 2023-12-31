#include "main.h"

/**
 * main - Entry point
 *
 * description : print from 1 to 100
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}
		if (count < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
