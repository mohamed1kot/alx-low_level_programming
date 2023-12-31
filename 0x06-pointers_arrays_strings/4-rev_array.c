#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array.
 *
 * @a : array input
 *
 * @n : the length of array
 *
 * Return: NONE
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
