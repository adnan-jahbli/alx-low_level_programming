#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs from the heap memory
 * @d: the given struct of dog
 * Return: void.
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
