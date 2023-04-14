#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory block to be reallocated
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 * Return: pointer to new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *array;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		/* allocating the new memory block */
		array = malloc(new_size * sizeof(*array));
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}
		for (i = 0; (i < old_size) && (i < new_size); i++)
		{
			array[i] = ((char *) ptr)[i];
		}
		free(ptr);
	}
	return (array);
}
