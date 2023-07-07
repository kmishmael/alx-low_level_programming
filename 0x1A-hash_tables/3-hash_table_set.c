#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key for insertion
 * @value: value for the node
 * Return: return 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		current = ht->array[index];
		new_node->next = current;
		ht->array[index] = new_node;
	}
	return (1);
}
