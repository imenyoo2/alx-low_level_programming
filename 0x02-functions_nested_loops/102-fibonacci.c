#include <stdio.h>


/**
 * main - Entry point
 * Return: always 0;
 */
int main(void)
{
	unsigned int n1;
	unsigned int n2;
	unsigned int buffer;
	int i;

	printf("1, 2");
	n1 = 1;
	n1 = 2;
	for (i = 0; i < 49; i++)
	{
		buffer = n1 + n2;
		printf(", %u", buffer);
		n1 = n2;
		n2 = buffer;
	}
	printf("\n");
	return (0);
}
