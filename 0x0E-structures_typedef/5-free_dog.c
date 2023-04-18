#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory used to store d
 * @d: dog struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);
}
