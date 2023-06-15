#include "lists.h"


/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: head of the list
 * @n: data of the new node
 * Return: pointer to the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *buffer = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return NULL;
	}
	new->n = n;
	if (*head != NULL)
	{
		while (buffer->next)
		{
			buffer = buffer->next;
		}
		buffer->next = new;
		new->prev = buffer;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	new->next = NULL;
	return (new);
}
