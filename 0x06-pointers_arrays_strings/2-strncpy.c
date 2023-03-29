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
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		*(dest + k) = *(src + k);
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
