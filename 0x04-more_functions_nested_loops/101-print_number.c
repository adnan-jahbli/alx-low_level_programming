#include "main.h"

/**
 * print_number - prints given numbers using ony _putchar function
 * @n: the number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / i > 9)
		i *= 10;
	while (i > 0)
	{
		_putchar((n / i) + '0');
		n %= i;
		i /= 10;
	}
}
