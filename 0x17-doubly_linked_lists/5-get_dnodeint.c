#include "lists.h"


/**
 * get_dnodeint_at_index - return pointer to the node at index
 * @head: head of the list
 * @index: index of node
 * Return: pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  unsigned int idx = 0;
  dlistint_t *buffer = head;

  while (buffer)
  {
    if (idx == index)
    {
      return (buffer);
    }
    buffer = buffer->next;
    idx++;
  }
  return (NULL);
}
