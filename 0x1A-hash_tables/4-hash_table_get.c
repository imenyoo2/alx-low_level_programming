#include "hash_tables.h"

/**
 * hash_table_get - returns the value of key in ht
 * @ht: the hash table
 * @key: key to be searched
 * Return: value corresponds to key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *buffer;

	if (key == NULL || *key == '\0' || ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if ((unsigned long int)index >= ht->size)
		return (NULL);

	buffer = (ht->array)[index];

	while (buffer)
	{
		if (!strcmp(buffer->key, key))
			return (buffer->value);
		buffer = buffer->next;
	}

	return (NULL);
}
