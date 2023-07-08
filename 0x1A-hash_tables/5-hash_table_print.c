#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *buffer;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 1; i < ht->size; i++)
	{
		buffer = (ht->array)[i];
		while (buffer)
		{
			if (first)
			{
				printf("'%s': '%s'", buffer->key, buffer->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", buffer->key, buffer->value);
			buffer = buffer->next;
		}
	}
	putchar('}');
	putchar('\n');
}
