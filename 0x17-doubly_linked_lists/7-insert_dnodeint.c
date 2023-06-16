#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of list
 * @n: data of new node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *buffer;
	size_t len = 0;
	unsigned int count = 1;
	dlistint_t *new;

	if (h == NULL)
	{
		return (NULL);
	}
	buffer = *h;
	while (buffer)
	{
		buffer = buffer->next;
		len++;
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	buffer = (*h)->next; /* starting from index 1 */
	while (buffer)
	{
		if (idx == count)
		{
			new->next = buffer;
			new->prev = buffer->prev;
			buffer->prev->next = new;
			buffer->prev = new;
			return (new);
		}
		buffer = buffer->next;
		count++;
	}
	return (NULL);
}
