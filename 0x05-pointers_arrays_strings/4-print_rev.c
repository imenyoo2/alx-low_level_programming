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
