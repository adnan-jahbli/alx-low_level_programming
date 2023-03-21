#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to prints its last digit.
 *
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	_putchar(i);
	return (i);
}
