#include "main.h"

/**
 * _strncpy - that copies a string into another.
 * @dest: the pointer that will be copied to.
 * @src: the pointer that will be copied.
 * @n: number of bytes used from src.
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	if (n >= 98)
		n = 98;
	for (k = 0; k < n; k++)
	{
		*(dest + k) = *(src + k);
	}
	return (dest);
}
