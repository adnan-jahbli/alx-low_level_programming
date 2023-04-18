#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs attributes
 * @name: dog's name
 * @owner: dog owner's name
 * @age: dog age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
