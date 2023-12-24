#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht :  is the hash table you want to add or update the key/value.
 * @key :  is the key. key can not be an empty string.
 * @value :  is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *current;
	unsigned long int index;

	if (!ht || !key)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
