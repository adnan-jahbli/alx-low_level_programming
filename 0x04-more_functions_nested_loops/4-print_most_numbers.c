#include "main.h"

/**
 * print_most_numbers - Priting the numbers from 0 to 9, exept 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		if (j == '2' || j == '4')
			continue;
		_putchar(j);
	}
	_putchar('\n');
}
