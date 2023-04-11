#include <stdlib.h>

/**
 * _strdup - return a new chunk of memory containing str
 * @str: string
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	int size = 0;
	char *new;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	/* alocating memory */
	new = (char *) malloc(size + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	/* dumping str to new */
	for (i = 0; i <= size; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
