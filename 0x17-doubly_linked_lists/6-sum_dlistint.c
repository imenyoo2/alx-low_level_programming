#include "lists.h"


/**
 * sum_dlistint - sums all data of dlistint_t list
 * @head: head of list
 * Return: the sum of all data of list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *buffer = head;
	int sum = 0;

	while (buffer)
	{
		sum += buffer->n;
		buffer = buffer->next;
	}
	return (sum);
}
