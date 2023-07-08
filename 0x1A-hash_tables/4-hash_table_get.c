#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	if (key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if ((long unsigned int)index >= ht->size)
		return (NULL);

	if ((ht->array)[index] == NULL)
		return (NULL);

	return ((ht->array)[index]->value);
}
