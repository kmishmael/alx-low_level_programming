#include "hash_tables.h"

/**
 * create_node - creates a new hash_node_t
 * @key: the node key
 * @value: the node value
 * Return: new hash_node_t, else NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
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

	if (ht == NULL || key == NULL || value == NULL
			|| strlen(key) == 0 || ht->size == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new_node = create_node(key, value);
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
	}
	else
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				if (current->value == NULL)
					return (0);
				return (1);
			}
			current = current->next;
		}
		new_node = create_node(key, value);
		if (new_node == NULL)
			return (0);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
