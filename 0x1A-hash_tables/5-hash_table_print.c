#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int count;
	hash_node_t *current = NULL;

	printf("{");
	if (ht != NULL && ht->size != 0)
	{
		index = 0;
		count = 0;
		while (index < ht->size)
		{
			current = ht->array[index];
			while (current !=  NULL)
			{
				if (count == 0)
				{
					printf("'%s': '%s'", current->key, current->value);
				}
				else
				{
					printf(", '%s': '%s'", current->key, current->value);
				}
				current = current->next;
				count++;
			}
			index++;
		}
	}
	printf("}\n");
}
