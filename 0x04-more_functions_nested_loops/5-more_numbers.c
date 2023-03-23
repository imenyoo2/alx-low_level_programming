#include "main.h"

/**
 * more_numbers - print numbers from 0 to 9 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	char c;
	int j;

	for (j = 0; j < 10; j++)
	{
		c = '0';
		for (i = 0; i < 14; i++)
		{
			if (i == 9)
			{
				c = '0';
			}
			if (i >= 9)
			{
				_putchar('1');
			}
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
