#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: address of head of list
 * @index: index of node to be deleted
 * Return: 1 if succeeded, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *buffer = *head;
	listint_t *buffer2;

	/* handling wrong arguments */
	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	/* handling the special case of index = 0 */
	if (index == 0)
	{
		buffer = (*head)->next;
		free(*head);
		*head = buffer;
		return (1);
	}
	/* getting the node in index - 1 position */
	while (index > 1)
	{
		buffer = buffer->next;
		index--;
		if (buffer == NULL)
		{
			return (-1);
		}
	}
	buffer2 = buffer->next->next;
	free(buffer->next);
	buffer->next = buffer2;
	return (1);
}
