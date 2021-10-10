#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 * @siz: size
 *
 * Return: New table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (0);

	new_ht->array = malloc(size * (sizeof(hash_node_t *)));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (0);
	}

	new_ht->size = size;

	return (new_ht);
}
