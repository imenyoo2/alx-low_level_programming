#include <stdio.h>

/**
 * main - prints number from 0 to 100 but with some substitutions
 * Return: always 0
 */
int main(void)
{
	int i;

	putchar('1');
	for (i = 2; i <= 100; i++)
	{
		if (!(i % 3) && !(i % 5))
		{
			fputs(" FizzBuzz", stdout);
		}
		else if (!(i % 3))
		{
			fputs(" Fizz", stdout);
		}
		else if (!(i % 5))
		{
			fputs(" Buzz", stdout);
		}
		else
		{
			printf(" %d", i);
		}
	}
	putchar('\n');

	return (0);
}
