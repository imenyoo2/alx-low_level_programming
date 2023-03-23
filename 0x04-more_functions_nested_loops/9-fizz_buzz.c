#include <stdio.h>

/**
 * main - prints number from 0 to 100 but with some substitutions
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3) && !(i % 4))
		{
			fputs("FizzBuzz", stdout);
		}
		else if (!(i % 3))
		{
			fputs("Fizz", stdout);
		}
		else if (!(i % 4))
		{
			fputs("Buzz", stdout);
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
