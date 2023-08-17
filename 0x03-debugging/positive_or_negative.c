#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * description: A C program input a random number and test if -n or +n or 0
 *
 * @i: input number
 *
 * Return: Always 0 (success)
*/

int positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);
	return (0);
}
