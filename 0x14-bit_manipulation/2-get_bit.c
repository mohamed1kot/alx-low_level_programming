#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 *
 * @n : input long int.
 * @index : inpus index.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ind;

	if (n == 0 && index < 64)
		return (0);

	for (ind = 0; ind <= 63; n >>= 1, ind++)
	{
		if (index == ind)
		{
			return (n & 1);
		}
	}

	return (-1);
}
