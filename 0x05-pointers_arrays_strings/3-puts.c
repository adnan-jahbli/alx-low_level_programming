#include "main.h"

/**
 * _puts - returns the length of a string.
 * @str: the given string to print it.
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
