#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: given name of new dog
 * @age: given age of new dog
 * @owner: given name of new owner
 * Return: void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d || !name || !owner)
		return (NULL);

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}
