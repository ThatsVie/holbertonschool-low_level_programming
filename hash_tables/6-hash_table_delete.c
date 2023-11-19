#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *next_node;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node)
		{
			next_node = node->next;

			free(node->key);
			free(node->value);
			free(node);

			node = next_node;
		}
	}

	free (ht->array);
	free(ht);
}
