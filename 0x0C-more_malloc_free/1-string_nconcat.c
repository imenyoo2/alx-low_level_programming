#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the ammount s2 to be used
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int memorySize = 0;
	char *new;
	unsigned int i, j;

	/* adding size of s1 */
	memorySize += getlen(s1);
	/* adding size of s2 */
	if (n > getlen(s2))
	{
		memorySize += getlen(s2);
	}
	else
	{
		memorySize += n;
	}
	/* allocating memory */
	new = malloc((memorySize + 1) * sizeof(new));
	/* dumping content to new memory */
	for (i = 0; i < getlen(s1); i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; j < memorySize - getlen(s1); j++)
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/**
 * getlen - gets the lenght of s
 * @s: string
 * Return: length of s
 */
unsigned int getlen(char *s)
{
	unsigned int length = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
