#include <stdlib.h>
#include "main.h"

char *_strdump(char *start, char *end);

/**
 * strtow - convert str to an array of words
 * @str: string
 * Return: pointer to array of words
 */
char **strtow(char *str)
{
	char **arr;
	int i, state = 1;
	char *start;
	char *end;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	if (numOfWords(str) > 0)
	{
		arr = (char **) malloc((numOfWords(str) + 1) * sizeof(char *));
	}
	else
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*str != '\0')
	{
		if ((*str != ' ' && *str != '\n' && *str != '\t') && state)
		{
			start = str;
			state = 0;
		}
		else if ((*str == ' ' || *str == '\n' || *str == '\t' || *str == '\t') && (!state))
		{
			end = str;
			arr[i] = _strdump(start, end);
			if (arr[i] == NULL)
			{
				return (NULL);
			}
			state = 1;
			i++;
		}
		str++;
	}
	arr[i] = NULL;
	return (arr);
}


/**
 * numOfWords - evaluates the number of words in str
 * @str: string
 * Return: number of words
 */
int numOfWords(char *str)
{
	int count = 0;
	int state = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			state = 0;
		}
		else if (state == 0)
		{
			state = 1;
			count++;
		}
	}

	return (count);
}

/**
 * _strdump - return a new chunk of memory containing str
 * @start: starting of string
 * @end: ending of string
 * Return: pointer to the new string
 */
char *_strdump(char *start, char *end)
{
	int size = end - start;
	char *new;
	int i;

	/* alocating memory */
	new = (char *) malloc(size + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	/* dumping str to new */
	for (i = 0; i < size; i++)
	{
		new[i] = start[i];
	}
	new[i] = '\0';
	return (new);
}
