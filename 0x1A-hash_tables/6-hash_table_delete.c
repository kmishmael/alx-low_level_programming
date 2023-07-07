#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *prev;

	if (ht == NULL)
		return;
	index = 0;
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			prev = current;
			current = current->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
