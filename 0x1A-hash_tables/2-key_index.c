#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: key
 * @siz: string used to generate hash value
 *
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
