#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of head
 * @head: head of the list
 * @index: the index wanted
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *buffer = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (counter < index)
	{
		buffer = buffer->next;
		if (buffer == NULL)
		{
			return (NULL);
		}
		counter++;
	}
	return (buffer);
}
