#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *buffer;

	if (key == NULL || *key == '\0' || ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if ((long unsigned int)index >= ht->size)
		return (NULL);

	buffer = (ht->array)[index];

	while (buffer)
	{
		if (buffer->key == key)
			return (buffer->value);
		buffer = buffer->next;
	}

	return (NULL);
}
