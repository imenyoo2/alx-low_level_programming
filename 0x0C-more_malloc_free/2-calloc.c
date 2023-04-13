#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}

