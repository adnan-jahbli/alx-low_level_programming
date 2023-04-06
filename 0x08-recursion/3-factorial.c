#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the given number
 * Return: 1 if n is 0 and -1 if its less than 0,
 * and returns the factorial of n otherwise.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
