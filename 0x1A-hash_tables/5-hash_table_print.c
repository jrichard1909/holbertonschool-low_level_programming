#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hast table
 * @key: key
 * Return: the value associated with the element.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int ind = 0;
	hash_node_t *tmp_node;
	if (ht == NULL)
		return;

	printf("{");
	for(i = 0; i < ht->size; i++)
	{
		tmp_node = ht->array[i];
		while(tmp_node != NULL)
		{
			if (ind != 0)
				printf(", ");
			printf("'%s': '%s'", tmp_node->key, tmp_node->value);
			ind = 1;
			tmp_node = tmp_node->next;
		}
	}
	printf("}\n");
}
