#include <stdio.h>


/**
 * main - Entry point
 * Return: always 0;
 */
int main(void)
{
	unsigned long int n1;
	unsigned long int n2;
	unsigned long int buffer;
	unsigned long int sum;

	n1 = 1;
	n2 = 2;
	buffer = 0;
	sum = 2;
	while (buffer < 4000000)
	{
		buffer = n1 + n2;
		if (!(buffer % 2))
		{
			sum += buffer;
		}
		n1 = n2;
		n2 = buffer;
	}
	printf("%lu\n", sum);
	return (0);
}
