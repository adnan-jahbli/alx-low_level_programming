#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the first string
 * @accept: the second string
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count = 1;
				break;
			}
		}
		if (count == 0)
			break;
	}

	return (i);
}
