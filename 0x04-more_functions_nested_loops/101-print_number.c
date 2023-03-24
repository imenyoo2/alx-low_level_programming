#include "main.h"

/**
 * print_number - prints the integer n
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar('0' + num % 10);
}
