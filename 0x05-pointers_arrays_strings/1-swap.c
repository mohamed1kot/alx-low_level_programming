#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 * @a: input
 *
 * @b: input
 *
 * Return : none
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
