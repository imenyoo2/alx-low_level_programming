
#include "hash_tables.h"

/**
 * key_index - give index of key in array
 * @size: size of array
 * @key: key in question
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
