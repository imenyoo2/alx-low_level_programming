#include "hash_tables.h"


/**
 * hash_table_delete - deletes ht
 * @ht: the hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *buffer;
	hash_node_t *buffer2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		buffer = ht->array[i];
		while (buffer)
		{
			buffer2 = buffer;
			buffer = buffer->next;
			free(buffer2->key);
			free(buffer2->value);
			free(buffer2);
		}
	}
	free(ht->array);
	free(ht);
}
