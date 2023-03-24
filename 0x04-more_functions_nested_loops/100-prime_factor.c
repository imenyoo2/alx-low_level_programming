#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i, max_factor;

	while (n % 2 == 0)
	{
		max_factor = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			max_factor = i;
			n /= i;
		}
	}

	if (n > 2)
		max_factor = n;

	printf("%lu\n", max_factor);

	return (0);
}
