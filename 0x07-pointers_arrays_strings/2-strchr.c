#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: the given string
 * @c: the given character
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i, exist;
	char *p;

	exist = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (*(s + i) == c)
		{
			p = s + i;
			exist = 1;
			break;
		}
		i++;
	}
	if (exist == 1)
		return (p);
	else
		return (0);
}
