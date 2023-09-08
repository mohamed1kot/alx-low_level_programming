#include "main.h"

/**
 * _calloc -  a function that allocates memory for an array, using malloc.
 *
 * @nmemb : number of element.
 * @size : size of memory will allocate it.
 *
 * Return: NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			ptr[i] = 0;
		return (ptr);
	}
	else
		return (NULL);
}
