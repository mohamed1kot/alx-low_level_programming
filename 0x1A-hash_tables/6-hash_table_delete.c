#include "hash_tables.h"

/**
 * hash_table_delete - hash_table_delete.
 *
 * @ht : the hash table.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *tmp;

	if (!ht)
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (ht->array[i] != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
