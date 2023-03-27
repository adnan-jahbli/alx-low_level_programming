#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the given string to print it in reverse.
 * Return: void.
 */
void print_rev(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length = i + 1;
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
