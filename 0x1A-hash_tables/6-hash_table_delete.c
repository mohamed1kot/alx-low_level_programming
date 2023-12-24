#include "hash_tables.h"

/**
 * hash_table_delete - hash_table_delete.
 *
 * @ht : the hash table.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			current = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = current;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
