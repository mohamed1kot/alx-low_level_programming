#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 *
 * @min : smallest value.
 * @max : largest value.
 *
 * Return: NULL.
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ptr[j] = i;
			j++;
		}
		return (ptr);
	}
	else
		return (NULL);

}
