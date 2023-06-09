#include "lists.h"


/**
 * add_dnodeint - adds a node to the beginning of the list
 * @head: head of the list
 * @n: data of the new node
 * Return: pointer to the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
