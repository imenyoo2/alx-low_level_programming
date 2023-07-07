#include "hash_tables.h"

/**
 * key_index - gives the index of key
 * @key: key to be indexed
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int mask = 511;

	return (hash_djb2(key) & mask);
}
