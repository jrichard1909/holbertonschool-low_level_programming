#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: a dictionary format of the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp_node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				tmp_node = ht->array[i];
				ht->array[i] = tmp_node->next;
				free(tmp_node->key);
				free(tmp_node->value);
				free(tmp_node);
			}
			free(ht->array[i]);
		}
	}

	free(ht->array);
	free(ht);
}
