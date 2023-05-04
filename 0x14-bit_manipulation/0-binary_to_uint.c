#include "main.h"

int is_binary(const char *);
unsigned int _strlen(const char *);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if b not containing only 1s and 0s
 * or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num, factor, len;
	int binary;

	binary = is_binary(b);
	if (!binary || !b)
		return (0);

	len = _strlen(b);

	factor = 1;
	num = 0;
	for (i = 0; i < len; i++)
	{
		if ((b[len - 1 - i] - 48) & 1)
			num += factor;
		factor *= 2;
	}

	return (num);
}

/**
 * is_binary - checks if a string contains only 0s and 1s
 * @b: the given string.
 *
 * Return: 1 if all chars are 0s and 1s and 0 otherwise.
 */
int is_binary(const char *b)
{
	unsigned int i;

	for (i = 0; *(b + i); i++)
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);

	return (1);
}

/**
 * _strlen - counts the length of a string
 * @s: the given string
 *
 * Return: number of chars in the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;

	return (i);
}
