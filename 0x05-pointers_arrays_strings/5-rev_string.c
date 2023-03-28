#include "main.h"

/**
 * rev_string - revers s and update the value of it
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	char *start = s;
	int length = _strlen(s);
	char *end = s + length - 1;
	int count = 0;
	char buffer;

	while (count < (length) / 2)
	{
		buffer = *(start + count);
		*(start + count) = *(end - count);
		*(end - count) = buffer;
		count++;
	}

}

/**
 * _strlen - return the length of the string s
 * @s: the pointer to the first head of the string
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;
	char *count = s;

	while (*count != '\0')
	{
		length++;
		count++;
	}
	return (length);
}
