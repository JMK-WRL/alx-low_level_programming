#include "hash_tables.h"

/**
 * key_index - function that gives an index of a key
 * @key: key
 * @size: size of array in the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
