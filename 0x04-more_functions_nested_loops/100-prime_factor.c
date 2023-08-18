#include <stdio.h>

/**
 * largestPrimeFactor - find largest prime factor
 *
 * @n : input
 *
 * Return: largest
*/

long largestPrimeFactor(long n)
{
	long largest = -1;
	long int i;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		largest = n;
	}
	return (largest);
}

/**
 * main - Entry point
 *
 * Return: 0
*/

int main(void)
{
	long number = 612852475143;
	long result = largestPrimeFactor(number);

	printf("%ld\n", result);
	return (0);
}
