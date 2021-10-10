#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return(0);

	new_ht->array = malloc(size * (sizeof(hash_node_t)));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return(0);
	}

	new_ht->size = size;
	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	return(new_ht);
}
