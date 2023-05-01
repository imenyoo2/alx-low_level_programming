#include "lists.h"


/**
 * sum_listint - returns the sum of all the data of listint_t
 * @head: the head of the list
 * Return: sum of all n's
 */
int sum_listint(listint_t *head)
{
	listint_t *buffer = head;
	int sum = 0;

	while (buffer != NULL)
	{
		sum += buffer->n;
		buffer = buffer->next;
	}
	return (sum);
}
