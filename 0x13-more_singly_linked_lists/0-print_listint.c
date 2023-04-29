#include "lists.h"

/**
 * print_listint - prints all elements of listsint_t
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (1)
	{
		numberOfNodes++;
		printf("%d\n", h->n);
		if (h->next == NULL)
		{
			break;
		}
		h = h->next;
	}
	return (numberOfNodes);
}
