#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the given string to returns its length
 * Return: the length of the given string.
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		/* printf("s[%d] = '%c'\n", i, s[i]); */
		length = i + 1;
	}
	return (length);
}
