#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the givent string
 * @b: the given character
 * @n: number of times b will be filled in s
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
