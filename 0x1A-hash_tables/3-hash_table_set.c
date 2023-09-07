

#include "hash_tables.h"

/**
 * hash_table_set - add element to table
 * @ht: hash table
 * @key: key of element
 * @value: value of element
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = key_index(key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL || index >= ht->size || index < 0)
		return (0);

	new->key = (char *)key;
	new->value = (char *)value;
	if (ht->array[index] != NULL)
	{
		if (!update_if_needed(ht->array[index], (char *)key, (char *)value))
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}
	else
	{
		new->next = NULL;
		ht->array[index] = new;
	}
	return (1);
}

/**
 * update_if_needed - update element if needed
 * @ptr: pointer to the linked list
 * @key: key of element to be updated
 * @value: new value
 * Return: 1 if updated, 0 otherwise
 */
int update_if_needed(hash_node_t *ptr, char *key, char *value)
{
	while (ptr)
	{
		if (str_cmp(ptr->key, key) == 0)
		{
			ptr->value = value;
			return (1);
		}
		ptr = ptr->next;
	}
	return (0);
}

/**
 * str_cmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: positive, negative or zero
 */
int str_cmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
