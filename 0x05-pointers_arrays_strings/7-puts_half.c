#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int n;

	if (length % 2)
	{
		n = (length) / 2;
	}
	else
	{
		n = length / 2;
	}

	while (n < length)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
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
