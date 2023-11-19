#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value paired with key
 *
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		current = ht->array[index];

		while (current != NULL)
		{
			if (strcmp(key, current->key) == 0)
			{
				current->value = strdup(value);

				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			current = current->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
