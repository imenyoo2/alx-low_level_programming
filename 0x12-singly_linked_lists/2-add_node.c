#include "lists.h"


/**
 * add_node - adds a new node to the beginning of list_t
 * @head: the head of list
 * @str: string of new node
 * Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	char *newStr;
	list_t *new;

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
	if (*head != NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		*head = new;
		new->next = NULL;
	}

	return (new);
}
