#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @a: the given string
 * Return: the string a.
 */
char *cap_string(char *a)
{
	int i, j;
	char words_sep[] = {' ', '	', '\n', ',', '.', ';', '!',
	'?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; words_sep[j] != '\0'; j++)
		{
			if ((i == 0 || a[i - 1] == words_sep[j]) && a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] -= 32;
				break;
			}
		}
	}
	return (a);
}
