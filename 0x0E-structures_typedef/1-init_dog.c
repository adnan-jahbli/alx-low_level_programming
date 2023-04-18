#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: the given variable of type struct dog
 * @name: given name of dog
 * @age: given age of dog
 * @owner: given name of owner
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
