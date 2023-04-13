#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer the momy block that will be reallocated
 * @old_size: the old size of the memory block
 * @new_size: the new size of the memory block
 * Return: a pointer to the newly allocated space or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	free(ptr);

	return (p);
}
