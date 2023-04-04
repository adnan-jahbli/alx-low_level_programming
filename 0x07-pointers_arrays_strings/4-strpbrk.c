#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the first string
 * @accept: the second string
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, tracker;

	tracker = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				tracker = 1;
				break;
			}
		}
		if (tracker == 1)
			break;
	}
	if (tracker == 1)
		return (s + i);
	else
		return ('\0');
}
