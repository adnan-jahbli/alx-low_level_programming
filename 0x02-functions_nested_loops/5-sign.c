#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number to check it's sign.
 *
 * Return: 1 and prints + if n is greater than zero
 * and returns 0 and prints 0 if n is zero
 * and returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
