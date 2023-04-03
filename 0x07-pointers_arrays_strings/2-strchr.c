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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
