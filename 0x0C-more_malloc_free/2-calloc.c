#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elemnts of the array
 * @size: the size in bytes of each element of the array
 * Return: a pointer to the allocated memory or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = nmemb * size;
	p = malloc(buffer);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < buffer; i++)
		p[i] = 0;

	return (p);
}
