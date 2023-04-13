#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the secong string
 * @n: number of bytes of s2
 * Return: a pointer to a newly allocated space in memory, which
 * contains s1, followed by the first n bytes of s2 and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p, *temp;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	temp = s1;
	i = 0;
	while (*temp++)
		i++;
	temp = s2;
	j = 0;
	while (*temp++)
		j++;

	if (n > j)
		n = j;

	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (k = 0; k < n; k++, i++)
	{
		p[i] = s2[k];
	}
	p[i] = '\0';

	return (p);
}
