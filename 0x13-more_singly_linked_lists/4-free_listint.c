#include "lists.h"


/**
 * free_listint - frees a listint_t list
 * @head: the list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *buffer = head->next;
	listint_t *buffer2 = head;

	if (buffer2 == NULL)
	{
		return;
	}
	else
	{
		while (1)
		{
			if (buffer == NULL)
			{
				free(buffer2);
				break;
			}
			free(buffer2);
			buffer2 = buffer;
			buffer = buffer->next;
		}
	}
}
