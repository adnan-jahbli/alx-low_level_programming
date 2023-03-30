#include "main.h"

/**
 * rot13 - a function that that encodes a string using rot13.
 * @a: the given string
 * Return: the string a.
 */
char *rot13(char *a)
{
	int i, j, size;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	size = (sizeof(input) / sizeof(char)) - 1;
	/* printf("size of input is: %i\n", size); */
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (a[i] == input[j])
			{
				a[i] = output[j];
				break;
			}
		}
	}

	return (a);
}
