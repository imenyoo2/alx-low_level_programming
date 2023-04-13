#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
