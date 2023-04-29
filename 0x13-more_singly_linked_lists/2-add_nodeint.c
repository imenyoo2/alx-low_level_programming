#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of list
 * @head: linked list
 * @n: the n field of list
 * Return: pointer to the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
