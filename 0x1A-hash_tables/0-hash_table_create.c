
#include "hash_tables.h"

/**
 * hash_table_create - creats a new table
 * @size: size of table
 * Return: pointer of NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_table_t **array;

	table = malloc(sizeof(hash_table_t));
	array = malloc(sizeof(hash_node_t *) * size);
	if (table == NULL || array == NULL)
		return (NULL);

	table->size = size;
	table->array = array;
	return (table);
}
