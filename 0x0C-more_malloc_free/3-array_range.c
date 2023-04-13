#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the min value in array
 * @max: the max value in array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(*array));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		array[i] = (min + i);
	}
	return (array);
}
