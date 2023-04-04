#include <stdio.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: search query
 * Return: pointer to the byte in s that matches one of the 
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		/* checking if *s is one of accept */
		i = 0;
		while (1)
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
			if (*(accept + i) == '\0')
			{
				break;
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
