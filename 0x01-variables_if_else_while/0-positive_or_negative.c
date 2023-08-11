#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program input a random number and test if -n or +n or 0
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		puts("%i is positive\n", n);
	else if (n < 0)
		puts("%i is negative\n", n);
	else
		puts("%i is zero\n", n);
	return (0);
}
