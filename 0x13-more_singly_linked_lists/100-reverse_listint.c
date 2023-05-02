#include "lists.h"


unsigned int getlen(listint_t *head, listint_t **last);
void swapNodes(listint_t *head, unsigned int lower, unsigned int higher);

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last;
	unsigned int lower = 0, higher = getlen(*head, &last) - 1;

	if (head == NULL)
	{
		return (NULL);
	}

	while (lower <= higher)
	{
		if (lower == 0)
		{
			swapNodes(*head, lower, higher);
		}
		else
		{
			swapNodes(last, lower, higher);
		}
		lower++;
		higher--;
	}
	*head = last;
	return (last);
}


/**
 * getlen - evaluate the length of a listint_t list, and modify last
 * @head: head of list
 * Return: int represent length of list
 */
unsigned int getlen(listint_t *head, listint_t **last)
{
	unsigned int n = 0;
	while (head != NULL)
	{
		*last = head;
		n++;
		head = head->next;
	}
	return (n);
}


/**
 * swapNodes - swapes 2 nodes in a listint_t list
 * @head: head of list
 * @lower: index of lower node to be swaped 
 * @higher: index of higher node to be swaped 
 * Return: void
 */
void swapNodes(listint_t *head, unsigned int lower, unsigned int higher)
{
	listint_t *buffer1 = head;
	listint_t *buffer2 = head;
	listint_t *buffer3;
	int i = 0;

	/* gitting node before index1 */
	while (lower - i > 1)
	{
		buffer1 = buffer1->next;
		i++;
	}
	i = 0;
	while (higher - i > 1)
	{
		buffer2 = buffer2->next;
		i++;
	}
	if (lower == 0)
	{
		buffer3 = buffer2->next->next;
		buffer2->next->next = buffer1->next;
		buffer1->next = buffer3;
		buffer2->next = buffer1;
	}
	else if (lower + 1 == higher)
	{
		buffer3 = buffer2->next->next;
		buffer2->next->next = buffer2;
		buffer1->next = buffer2->next;
		buffer2->next = buffer3;
	}
	else
	{
		buffer3 = buffer2->next->next;
		buffer2->next->next = buffer1->next->next;
		buffer1->next->next = buffer3;
		buffer3 = buffer2->next;
		buffer2->next = buffer1->next;
		buffer1->next = buffer3;
	}
}

