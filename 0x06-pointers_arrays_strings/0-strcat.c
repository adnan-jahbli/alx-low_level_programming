#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: the pointer that will be appended by src.
 * @src: the pointer that will be appended to dest.
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	for (k = 0; k <= j; k++)
	{
		*(dest + i + k) = *(src + k);
	}
	return (dest);
}
