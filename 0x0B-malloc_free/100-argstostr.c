#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: string of arguments separated by \n
 */
char *argstostr(int ac, char **av)
{
	int size = 0;
	int i, j, k;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j) != '\0')
		{
			j++;
		}
		size += j + 1;
	}
	result = (char *) malloc(size * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j) != '\0')
		{
			result[k] = av[i][j];
			j++;
			k++;
		}
		result[k] = '\n';
		k++;
	}
	return (result);
}
