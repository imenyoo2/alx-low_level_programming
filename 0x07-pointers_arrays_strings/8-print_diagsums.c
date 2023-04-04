#include <stdio.h>

/**
 * print_diagsums - prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: square matrice
 * @size: size of a
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int first = 0, second = 0;
	int i, j;

	j = 0;
	for (i = 0; i < size; i++)
	{
		first += *(a + i * size + j);
		second += *(a + i * size + (size - 1 - j));
		j++;
	}
	printf("%d, %d\n", first, second);
}
