#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the given number
 * Return: void.
 */
void print_number(int n)
{
	unsigned int i, j, k;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = 1;
	k = n;
	while (k > 9)
	{
		k /= 10;
		i *= 10;
	}
	for (j = i; j >= 1; j /= 10)
	{
		_putchar((n / j) % 10 + '0');
	}
}
