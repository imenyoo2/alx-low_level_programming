#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	int index;
	hash_node_t *buffer;

	if (ht == NULL || key == NULL ||
			*key == '\0' || new == NULL)
		return (0);

	index = key_index((unsigned const char *) key, ht->size);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = NULL;

	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new;
	}
	else
	{
		buffer = (ht->array)[index];
		new->next = buffer;
		(ht->array)[index] = new;
	}
	return (1);
}
