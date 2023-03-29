#include "main.h"

/**
 * _strncat - that concatenates two strings.
 * @dest: the pointer that will be appended by src.
 * @src: the pointer that will be appended to dest.
 * @n: number of bytes used from src.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	if (n >= j)
		n = j;
	for (k = 0; k < n; k++)
	{
		*(dest + i + k) = *(src + k);
	}
	*(dest + i + n + 1) = '\0';
	return (dest);
}
