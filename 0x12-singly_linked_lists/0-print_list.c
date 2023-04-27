#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all element of h
 * @h: pointer to the first head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (1)
	{
		elements++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		if (h->next == NULL)
		{
			return (elements);
		}
		else
		{
			h = h->next;
		}
	}
}
