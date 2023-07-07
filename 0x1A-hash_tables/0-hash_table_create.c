#include "hash_tables.h"


/**
 * hash_table_create - create a new hash table
 * @size: size of the array
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	hash_node_t **array = malloc(sizeof(hash_node_t *) * size);

	if (new == NULL || array == NULL)
		return NULL;

	new->size = size;
	new->array = array;

	return new;
}
