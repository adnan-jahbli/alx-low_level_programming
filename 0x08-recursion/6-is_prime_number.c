#include "main.h"

int is_prime_number2(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number.
 * @n: the given number.
 * Return: 1 if n is a prime number. 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime_number2(n, 2));
}

/**
 * is_prime_number2 - checks if an a number is a prime number.
 * @n: the given number.
 * @i: iterator.
 * Return: 1 if n is a prime number. 0 otherwise.
 */
int is_prime_number2(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (is_prime_number2(n, i + 1));
}
