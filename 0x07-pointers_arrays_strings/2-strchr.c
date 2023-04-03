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
	unsigned int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
