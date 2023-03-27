#include <string.h>
#include "main.h"

/**
 * puts_half -  prints second half of a string, followed by a new line.
 * @str: the given string.
 * Return: void.
 */
void puts_half(char *str)
{
	int i;

	for (i = strlen(str) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
