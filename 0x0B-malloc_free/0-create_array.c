#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 *                it with a specific char
 * @size: size of the array
 * @c: initialization char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
