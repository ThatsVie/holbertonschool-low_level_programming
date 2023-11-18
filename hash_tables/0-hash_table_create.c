#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of table
 *
 * Return: address of the created hash table, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int index;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;

	new_table->array = calloc(new_table->, sizeof(hash_node_t *));
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	for (index = 0; index < new_table->size; index++)
	{
		new_table->array[index] = NULL;
	}

	return (new_table);
}
