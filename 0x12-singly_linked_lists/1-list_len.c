#include "lists.h"

/**
 * list_len - count the length of h
 * @h: linked list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		h = h->next;
		elements++;
	}
	elements++;
	return (elements);
}
