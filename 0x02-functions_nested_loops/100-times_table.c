#include "main.h"

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @last: [0, last]
 * Return: void
 */
void print_times_table(int last)
{
	int i, j, n;

	if (last > 15 || last < 0)
	{
		return;
	}

	for (i = 0; i <= last; i++)
	{
		_putchar('0');
		for (j = 1; j <= last; j++)
		{
			n = i * j;
			if (n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (n < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((n - (n % 10)) / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n - (n % 100)) / 100 + '0');
				_putchar(((n - (n % 10)) / 10) % 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
