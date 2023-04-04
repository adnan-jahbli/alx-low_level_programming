#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the first string
 * @needle: the substring to locate
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, tracker;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			tracker = 0;
			if (needle[i] == haystack[j] && needle[i + 1] == haystack[j + 1])
			{
				tracker = 1;
				break;
			}
			else if (needle[i] == haystack[j] && needle[i - 1] == haystack[j - 1])
			{
				tracker = 1;
				break;
			}
		}
		if (tracker == 0)
			break;
	}
	if (tracker == 1)
		return (needle);
	else
		return ('\0');
}
