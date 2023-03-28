#include "main.h"

/**
 * _puts - prints the string str followed by new line
 * @str: the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
