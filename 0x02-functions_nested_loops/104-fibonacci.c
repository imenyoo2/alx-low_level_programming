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
	int i;

	printf("1, 2");
	n1 = 1;
	n2 = 2;
	for (i = 0; i < 98; i++)
	{
		buffer = n1 + n2;
		printf(", %lu", buffer);
		n1 = n2;
		n2 = buffer;
	}
	printf("\n");
	return (0);
}
