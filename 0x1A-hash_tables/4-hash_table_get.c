#include "hash_tables.h"

/**
 * hash_table_get - function that prints a hash table.
 *
 * @ht :  the hash table.
 * @key : is the key you are looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
