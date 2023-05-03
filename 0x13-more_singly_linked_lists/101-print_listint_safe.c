#include "lists.h"


/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of list
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *buffer = head;

	if (head == NULL)
	{
		exit(98);
	}
	while (head != NULL)
	{
		printf("[0x%lx] %d\n", *((long *) &head) & 0x00000fffffff, head->n);
		buffer = head;
		head = head->next;
		if (head > buffer)
		{
			printf("-> [0x%lx] %d\n", *((long *) &head) & 0x00000fffffff, head->n);
			break;
		}
		count++;
	}
	return (count);
}

