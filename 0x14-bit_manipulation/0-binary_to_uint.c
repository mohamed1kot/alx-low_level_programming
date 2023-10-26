#include "main.h"

/**
 * _pow - calculate n nth multibly.
 *
 * @x : input number.
 *
 * Return: result of multi.
*/

int _pow(int x)
{
	int i;
	int p = 1;

	for (i = 1; i <= x; i++)
		p *= 2;
	return (p);
}

/**
 * binary_to_uint -  a function that converts
 * a binary number to an unsigned int.
 *
 * @b : input string from bits number.
 *
 * Return:  the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int count = 0;
	int x;

	if (b == NULL)
		return (0);

	for (; b[count] != '\0'; count++)
		;
	count--;
	x = count;
	while (count >= 0)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);

		sum += (b[count] - '0') * _pow(x - count);
		count--;
	}
	return (sum);
}
