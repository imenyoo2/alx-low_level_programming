#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string (on the right)
 * @s2: the second string (on the left)
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i, j;
	char *new;

	if (s1 != NULL)
	{
		size1 = getSize(s1);
	}
	if (s2 != NULL)
	{
		size2 = getSize(s2);
	}

	/* alocating memory */
	new = (char *) malloc(size1 + size2 + 1);
	if (new == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = 0; i < size1; i++)
	{
		new[j] = s1[i];
		j++;
	}
	for (i = 0; i < size2; i++)
	{
		new[j] = s2[i];
		j++;
	}
	new[j + 1] = '\0';

	return (new);
}

/**
 * getSize - return the size of s
 * @s: string
 * Return: int
 */
int getSize(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
