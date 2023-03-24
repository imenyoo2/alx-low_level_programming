#include "main.h"

/**
 * print_number - prints the integer n
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int lastDigit;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		lastDigit = n % 10;
		print_number(n / 10);
		_putchar('0' + lastDigit);
	}
}
