#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the given string to reverse.
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
