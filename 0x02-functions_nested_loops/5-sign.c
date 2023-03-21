#include "main.h"

/**
 * print_sign - checks the sign of n
 * @n: the integer to be checked
 * Return: 1 if n positive, -1 if it's nigative or 0 if n is null
 */
int print_sign(int n)
{
	if (!n)
	{
		_putchar('0');
		return (n);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
