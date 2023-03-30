#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: the first string to compare.
 * @s2: the second string to compare.
 * Return: a pointer to the resulting string dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i, k, result;

	i = 0;
	result = 0;
	while (s1[i] != '\0')
		i++;
	for (k = 0; k <= i; k++)
	{
		if (s1[k] != s2[k])
		{
			result = s1[k] - s2[k];
			break;
		}
	}
	return (result);
}
