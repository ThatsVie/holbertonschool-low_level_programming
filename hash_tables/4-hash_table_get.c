#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key from a hash table.
 * @ht: hash table
 * @key: key to search
 *
 * Return: value associated with key , or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht)
		return (NULL);

	index = key_index ((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return node->value;

		node = node->next;
	}

	return (NULL);

