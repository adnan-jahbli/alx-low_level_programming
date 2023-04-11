#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specefic char.
 * @size: the size of the array
 * @c: the initializing charcater
 * Return: NULL if size = 0 or if it fails and a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	return (s);
}
