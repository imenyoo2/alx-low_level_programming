#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog instence
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(new));
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
