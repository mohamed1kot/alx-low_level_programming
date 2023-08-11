#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
	/* your code goes there */

	if (n > 0)
	{
		puts(n, " is positive");
	}
	elif(n < 0)
	{
		puts(n, " is negative");
	}
	else
	{
		puts(n, " is zero");
	}
	return (0);
}
