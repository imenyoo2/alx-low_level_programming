#include "main.h"

/**
 * print_rev - prints s in reverse
 * @s: the string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int length = _strlen(s) - 1;

	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
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
