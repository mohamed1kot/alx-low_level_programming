#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array : it is the array the function will print it.
 * @size : the size of array.
 * @action : it is the pointer that points to function i need.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
