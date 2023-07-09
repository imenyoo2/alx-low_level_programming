#include "hash_tables.h"


/**
 * shash_table_create - create a new hash table
 * @size: size of the array
 * Return: pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new = malloc(sizeof(shash_table_t));
	shash_node_t **array = malloc(sizeof(shash_node_t *) * size);

	if (new == NULL || array == NULL)
		return (NULL);

	new->size = size;
	new->array = array;
	new->shead = NULL;
	new->stail = NULL;

	return (new);
}


/**
 * shash_table_set - set a new node to the hash table
 * @ht: the hash table to be set
 * @key: key of new node
 * @value: value of new node
 * Return: 1 if succeed, otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));
	int index;
	shash_node_t *buffer;

	if (ht == NULL || key == NULL ||
			*key == '\0' || new == NULL)
		return (0);

	index = key_index((unsigned const char *) key, ht->size);

	if ((unsigned long int) index >= ht->size)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);

	new->next = NULL;
	new->snext = NULL;
	new->sprev = NULL;

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
	/* ordering the linked list */
	order_node(ht, new);
	return (1);
}

/**
 * order_node - orders node in the linked list
 * @ht: the hash table
 * @node: the node to be inserted
 * Return: void
 */
void order_node(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *buffer = ht->shead;
	/* case for first node */
	if (buffer == NULL)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		while (buffer)
		{
			if (strcmp(node->key, buffer->key) <= 0)
			{
				node->snext = buffer;
				node->sprev  = buffer->sprev;
				if (buffer->sprev)
					buffer->sprev->snext = node;
				else
					ht->shead = node; /* setting new head */
				buffer->sprev = node;
				return;
			}
			buffer = buffer->snext;
		}
		/* setting new tail */
		ht->stail->snext = node;
		node->sprev = ht->stail;
		ht->stail = node;
	}
}

/**
 * shash_table_get - returns the value of key in ht
 * @ht: the hash table
 * @key: key to be searched
 * Return: value corresponds to key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *buffer;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if ((unsigned long int)index >= ht->size)
		return (NULL);

	buffer = (ht->array)[index];

	while (buffer)
	{
		if (!strcmp(buffer->key, key))
			return (buffer->value);
		buffer = buffer->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the hash table
 * @ht: the hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *buffer;
	int first = 1;

	if (ht == NULL)
		return;

	putchar('{');
	buffer = ht->shead;
	while (buffer)
	{
		if (first)
		{
			printf("'%s': '%s'", buffer->key, buffer->value);
			first = 0;
		}
		else
			printf(", '%s': '%s'", buffer->key, buffer->value);
		buffer = buffer->snext;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_print_rev - prints the hash table in reverse order
 * @ht: the hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *buffer;
	int first = 1;

	if (ht == NULL)
		return;

	putchar('{');
	buffer = ht->stail;
	while (buffer)
	{
		if (first)
		{
			printf("'%s': '%s'", buffer->key, buffer->value);
			first = 0;
		}
		else
			printf(", '%s': '%s'", buffer->key, buffer->value);
		buffer = buffer->sprev;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_delete - deletes ht
 * @ht: the hash table to be deleted
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *buffer;
	shash_node_t *buffer2;

	if (ht == NULL)
		return;

	buffer = ht->shead;
	while (buffer)
	{
		buffer2 = buffer;
		buffer = buffer->snext;
		free(buffer2->key);
		free(buffer2->value);
		free(buffer2);
	}
	free(ht->array);
	free(ht);
}
