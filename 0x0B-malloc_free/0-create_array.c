#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size : size of array.
 * @c : charcter input.
 *
 * Return: Null if size equl 0 else 0
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	unsigned int i;

	if (size == 0 || n == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
