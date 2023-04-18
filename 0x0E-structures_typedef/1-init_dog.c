#include "dog.h"

/**
 * init_dog - initializes the struct d with passed arguments
 * @d: dog instance
 * @name: name field
 * @age: name age
 * @owner: name owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
