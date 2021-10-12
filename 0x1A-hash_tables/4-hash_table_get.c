#include "hash_tables.h"

/**
 * hash_table_set - implementation of the djb2 algorithm
 * @ht: hash table
 * @key: key
 * @value: value of a key
 *
 * Return: table modified
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp_node;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	
	tmp_node = ht->array[index];

	while (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key, key) == 0)
			return (tmp_node->value);
		tmp_node = tmp_node->next;
	}

	return (0);
}
