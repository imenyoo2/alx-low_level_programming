#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *buffer = head;

	while (buffer != NULL)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
}
