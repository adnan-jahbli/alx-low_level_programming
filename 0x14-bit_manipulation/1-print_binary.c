#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the given number
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (!(n >> 0)) /* edge case: when n = 0 */
	{
		_putchar('0');
	}
	else
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
