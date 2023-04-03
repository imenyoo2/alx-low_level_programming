#include <stdio.h>

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
	return (NULL);
}
