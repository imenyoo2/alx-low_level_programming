#include "main.h"
/**
 * _puts_recursion - prints s followed by new line
 * @s: the string to be printed
 * Return: viod
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
