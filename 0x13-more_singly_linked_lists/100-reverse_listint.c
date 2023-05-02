#include "lists.h"


/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *buffer = NULL;
	listint_t *buffer2;

	while (*head != NULL)
	{
		buffer2 = (*head)->next;
		(*head)->next = buffer;
		buffer = *head;
		*head = buffer2;
	}
	*head = buffer;
	return (buffer);
}

