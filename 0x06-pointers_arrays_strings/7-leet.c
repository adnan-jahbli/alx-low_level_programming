#include "main.h"

/**
 * leet - a function that that encodes a string into 1337.
 * @a: the given string
 * Return: the string a.
 */
char *leet(char *a)
{
	int i, j, size;
	int num[] = {4, 3, 0, 7, 1};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};

	size = sizeof(num) / sizeof(int);
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (a[i] == upper[j] || a[i] == lower[j])
			{
				a[i] = num[j] + '0';
				break;
			}
		}
	}

	return (a);
}
