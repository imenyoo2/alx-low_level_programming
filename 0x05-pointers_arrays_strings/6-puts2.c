#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
