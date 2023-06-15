#include "lists.h"


/**
 * dlistint_len - get size of a double list
 * @h: head of the list
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *buffer = h;

	while (buffer)
	{
		count++;
		buffer = buffer->next;
	}
	return (count);
}
