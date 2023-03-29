#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: the number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 1;

	if (n > 0)
	{
		printf("%d", *a);
	}
	while (count < n)
	{
		printf(", %d", *(a + count));
		count++;
	}
	printf("\n");
}
