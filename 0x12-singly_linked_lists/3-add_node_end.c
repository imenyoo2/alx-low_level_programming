#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: the head of the list
 * @str: string of new node
 * Return: pointer to the new node or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	char *newStr;
	list_t *new;
	list_t *buffer;

	newStr = strdup(str);
	if (newStr == NULL)
	{
		return (NULL);
	}
	while (*(str + len) != '\0')
	{
		len++;
	}
	new = (list_t *) malloc(sizeof(list_t));
	new->str = newStr;
	new->len = len;
	new->next = NULL;
	if (*head != NULL)
	{
		buffer = *head;
		while (buffer->next != NULL)
		{
			buffer = buffer->next;
		}
		buffer->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);

}
