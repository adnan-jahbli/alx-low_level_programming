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
	int i, j, counter;
	dog_t *d;

	d = (dog_t *) malloc(sizeof(dog_t));
	if (!d || !name || !owner)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;

	for (j = 0; owner[j]; j++)
		;

	d->name = malloc(i + 1);
	d->owner = malloc(j + 1);

	if (!(d->name) || !(d->owner))
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}

	for (counter = 0; counter < i; counter++)
		d->name[counter] = name[counter];
	d->name[counter] = '\0';

	d->age = age;

	for (counter = 0; counter < j; counter++)
		d->owner[counter] = owner[counter];
	d->owner[counter] = '\0';

	return (d);
}
