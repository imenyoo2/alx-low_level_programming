#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	new->age = age;
	new->name = strcpy((char *) malloc(sizeof(name)), name);
	new->owner = strcpy((char *) malloc(sizeof(owner)), owner);
	return (new);
}
