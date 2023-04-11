#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings..
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string and NULL if failed.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*calculating the len of s1 */
	len1 = 0;
	while (*(s1 + len1) != '\0')
		len1++;

	/*calculating the len of s2 */
	len2 = 0;
	while (*(s2 + len2) != '\0')
		len2++;

	s = malloc(sizeof(char) * (len1 + len2) + 1);

	if (s == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < len1 + len2)
	{
		if (i < len1)
			*(s + i) = *(s1 + i);
		else
		{
			*(s + i) = *(s2 + j);
			j++;
		}
		i++;
	}

	return (s);
}
