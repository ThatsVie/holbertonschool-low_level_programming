#include "hash_tables.h"
/**
 * key_index - computes the index of the array in a hash table for a given key.
 * @key: key for which the index is computed
 * @size: size of the array(size of hash table)
 *
 * Return: index of the array in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
