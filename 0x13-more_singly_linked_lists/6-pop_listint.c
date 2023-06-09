#include "lists.h"


/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to head listint_t
 * Return: head node data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int ReturnValue;
	listint_t *buffer = *head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		ReturnValue = (*head)->n;
		*head = (*head)->next;
		free(buffer);
		return (ReturnValue);
	}
}
