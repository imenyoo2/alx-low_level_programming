#include "lists.h"


/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer = head;

	while (buffer)
	{
		if (buffer->prev)
			free(buffer->prev);
		buffer = buffer->next;
	}
}
