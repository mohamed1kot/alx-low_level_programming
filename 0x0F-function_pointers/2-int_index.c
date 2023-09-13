#include "function_pointers.h"

/**
 * int_index -  a function that searches for a first integer
 * and return index of this integer number.
 *
 * @array : the array i will search in it.
 * @size : the size of an array.
 * @cmp : pointer to function that compare between two elements.
 *
 * Return: index of first element or -1.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
