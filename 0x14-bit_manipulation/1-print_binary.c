#include "main.h"


/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	mask = mask  << ((sizeof(unsigned long int) * 8) - 1);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* offsetting mask */
	while ((n & mask) == 0)
	{
		mask >>= 1;
	}
	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
