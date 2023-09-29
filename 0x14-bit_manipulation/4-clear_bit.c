#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *
 * @n : input pointer to int num.
 * @index : input index .
 *
 * Return:  1 if it worked, or -1 if an error occurred.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l;

	if (index > 63)
		return (-1);

	l = 1 << index;
	if (*n & l)
		*n ^= l;
	return (1);
}
