#include "hash_tables.h"

/**
 * hash_table_create -  a function that creates a hash table.
 *
 * @size :  the size of the array.
 *
 * Return:  a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t j = 0;
	hash_table_t *new_arr;

	new_arr = malloc(sizeof(hash_table_t));
	if (new_arr == NULL)
	{
		return (NULL);
	}
	new_arr->size = size;
	new_arr->array = malloc(sizeof(hash_table_t *) * size);
	if (new_arr->array == NULL)
	{
		return (NULL);
	}
	for (; j < size; j++)
		free(new_arr->array[j]);

	return (new_arr);
}
