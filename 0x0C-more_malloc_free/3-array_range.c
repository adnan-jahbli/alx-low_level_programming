#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: the starting number in the array
 * @max: the ending number in the array
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < max - min + 1)
	{
		p[i] = min + i;
		i++;
	}

	return (p);
}
