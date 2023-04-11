
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the number of args passed
 * @argv: array of args passed
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int result = 0;

	if (argc >= 3)
	{
		argv++;
		while (--argc)
		{
			if (checkint(*argv))
			{
				result += atoi(*argv++);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
		return (0);
	}
	else if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * checkint - check if s represent an int
 * @s: string
 * Return: 1 if true, 0 otherwise
 */
int checkint(char *s)
{
	while (*s != '\0')
	{
		if (!(*s >= '0' && *s <= '9'))
		{
			return (0);
		}
		s++;
	}
	return (1);
}
