#include "main.h"

int power(int n, int i);

/**
 * _sqrt_recursion - it returns the natural square root of a number.
 * @n: the given number.
 * Return: square root of n, -1 or 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}

/**
 * power - an auxiliary function that returns natural square root of a number.
 * @n: the given number.
 * @i: iterator.
 * Return: square root of n or -1.
 */
int power(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power(n, i + 1));
}
