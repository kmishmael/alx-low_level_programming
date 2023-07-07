#include "hash_tables.h"

/**
 * key_index - it gives you the index of a key
 * @key: the key for lookup
 * @size: size of array of hashtable
 * Return: returns the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
