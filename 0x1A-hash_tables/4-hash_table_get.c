#include "hash_tables.h"

/**
 * hash_table_get - retrives a value associated with a key
 * @ht: the hash table.
 * @key: the key you are looking for
 * Return: value associated with the element or NULL
 */

char *hasr_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	return ((current == NULL) ? NULL : current->value);
}
