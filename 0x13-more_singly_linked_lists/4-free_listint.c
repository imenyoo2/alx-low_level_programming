#include "lists.h"


/**
 * free_listint2 - frees a listint_t list
 * @head: the list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *buffer = (*head)->next;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	else
	{
		while (1)
		{
			if (buffer == NULL)
			{
        free(*head);
				break;
			}
			free(*head);
      *head = buffer;
			buffer = buffer->next;
		}
		*head = NULL;
	}
}
