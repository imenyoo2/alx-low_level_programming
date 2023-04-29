#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: the head of list
 * @n: n field of listint_t
 * Return: address of the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *buffer = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (buffer->next != NULL)
		{
			buffer = buffer->next;
		}
		buffer->next = new;
	}
	return (new);
}
