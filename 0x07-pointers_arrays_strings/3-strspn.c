#include <stdio.h>
#include "main.h"

/**
 * getMask - generating the mask
 * @n: the location of the bit to be set
 * Return: int
 */
int getMask(int n)
{
	int mask = 1;
	int i;

	for (i = 0; i < n; i++)
	{
		mask *= 2;
	}
	return (mask);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: the accepted letters
 * Return: length of the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	char *check;
	int acceptLength = 0, i = 0, completed = 0, wanted = 1;

	/* getting the length of accept */
	while (*(accept + acceptLength) != '\0')
	{
		acceptLength++;
		wanted |= getMask(i);
		i++;
	}

	/* look up loop */
	while (*s != '\0')
	{
		check = _strchr(accept, *s);
		if (check == NULL)
		{
			if (completed == wanted)
			{
				return (length);
			}
			else
			{
				length = 0;
				/* clearing up arr */
				for (i = 0; i < acceptLength; i++)
				{
					completed = 0;
				}
			}

		}
		completed |= getMask(check - accept);
		s++;
		length++;
	}
	return (0);
}


/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurrence of c, or NULL if
 * no character is found
 */
char *_strchr(char *s, char c)
{
	char *buffer = s;

	while (*buffer != '\0')
	{
		if (*buffer == c)
		{
			return (buffer);
		}
		buffer++;
	}
	if (c == '\0')
	{
		return (buffer);
	}
	return (NULL);
}
