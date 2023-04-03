#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: the buffer where the copied memory area will be passed to
 * @src: the copied memory area
 * @n: number of elements to be copied from src
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
