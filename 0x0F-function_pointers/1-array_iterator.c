#include "function_pointers.h"

/**
 * array_iterator - executes action on each element of array
 * @array: array of ints
 * @size: size of the array
 * @action: function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
