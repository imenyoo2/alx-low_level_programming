#include "lists.h"

/**
 * listint_len - returns the number of nodes in h
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numberOfNodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (1)
	{
		numberOfNodes++;
		if (h->next == NULL)
		{
			break;
		}
		h = h->next;
	}
	return (numberOfNodes);
}
