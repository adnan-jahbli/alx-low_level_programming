#include <string.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the given string to reverse.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j;
	char sat;

	for (i = 0; i < (int) strlen(s) - 1; i++)
	{
		for (j = i; j >= 0; j--)
		{
			sat = *(s + j + 1);
			*(s + j + 1) = *(s + j);
			*(s + j) = sat;
		}
	}
}
