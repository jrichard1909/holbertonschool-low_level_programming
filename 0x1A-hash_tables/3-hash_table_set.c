#include "hash_tables.h"

/**
 * hash_table_set - implementation of the djb2 algorithm
 * @ht: hash table
 * @key: key
 * @value: value of a key
 *
 * Return: table modified
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int index;


	if (key[0] == '\0' || key == NULL || ht == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	tmp = ht->array[index];

	if (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)
		new_node->next = NULL;
	else
		new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}
