#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a :array input
 *
 * @size : size of array
 *
 * Return: None
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 1; i <= size; i++)
	{
		sum1 += a[(i - 1) + (i - 1) * size];
		sum2 += a[i * size - i];
	}
	printf("%d, %d\n", sum1, sum2);
}
