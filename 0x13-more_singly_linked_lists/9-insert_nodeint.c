#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of list
 * @idx: insert position
 * @n: node data
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *buffer = *head;
	listint_t *new;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	/* creating the new node */
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	/* inserting the new node */
	if (idx == 0)
	{
		new->next = buffer;
		*head = new;
		return (new);
	}
	while (idx > 1)
	{
		buffer = buffer->next;
		if (buffer == NULL)
		{
			free(new);
			return (NULL);
		}
		idx--;
	}
	new->next = buffer->next->next;
	buffer->next = new;
	return (new);
}
