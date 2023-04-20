#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: num of args
 * @argv: array of args
 * Return: alwayse 0
 */
int main(int argc, char **argv)
{
	unsigned int *start = (unsigned int *) main;
	int i, counter = 0;
	int mask = 0xff;
	unsigned int buffer = *start;
	unsigned int byte;
	int size;

	size = atoi(argv[1]);
	for (i = 0; i < size; i++)
	{
		if (counter == 4)
		{
			start++;
			buffer = *start;
			counter = 0;
		}
		byte = buffer & mask;
		buffer = buffer >> 8;
		printf("%02x", byte);
		if (i == size - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
		counter++;
	}
	return (0);
}

