#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of list
 * index: index of node to be deleted
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *buffer;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);
	buffer = *head;
	while (buffer)
	{
		if (count == index)
		{
			if (buffer->prev)
				buffer->prev->next = buffer->next;
			else
				*head = buffer->next;
			if (buffer->next)
				buffer->next->prev = buffer->prev;
			free(buffer);
			return (1);
		}
		buffer = buffer->next;
		count++;
	}
	return (-1);
}
