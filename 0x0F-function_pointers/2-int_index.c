#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: check function
 * Return: the index of the first element of which cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
