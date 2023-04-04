#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *query = needle;

	while (*haystack != '\0' && (*query != '\0' || *needle == '\0'))
	{
		if (*haystack == *needle)
		{
			start = haystack;
			query++;
		}
		else if (*haystack != *query)
		{
			query = needle;
		}
		else
		{
			query++;
		}
		haystack++;
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	else if (*query == '\0')
	{
		return (start);
	}
	else
	{
		return (NULL);
	}
}
