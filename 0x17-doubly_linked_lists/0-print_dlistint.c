#include "lists.h"


/**
 * print_dlistint - prints a doubled list
 * @h: head of the list
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *buffer = h;

	while (buffer)
	{
		printf("%d\n", buffer->n);
		buffer = buffer->next;
		count++;
	}
	return (count);
}
