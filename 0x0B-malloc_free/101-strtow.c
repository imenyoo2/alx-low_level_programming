#include <stdlib.h>
#include "main.h"

/**
 * strtow - convert str to an array of words
 * @str: string
 * Return: pointer to array of words
 */
char **strtow(char *str)
{
	char **arr;
	int i;
	char *start;

	if (str == NULL || *str == '\n')
	{
		return (NULL);
	}
	arr = (char **) malloc(numOfWords(str) * sizeof(char *));

	for (i = 0; i < numOfWords(str); i++)
	{
		while (1)
		{
			if ()
		}
	}


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

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
			state = 0;
		}
		else if (state == 0) {
			state = 1;
			count++;
		}
	}

	return (count);
}
