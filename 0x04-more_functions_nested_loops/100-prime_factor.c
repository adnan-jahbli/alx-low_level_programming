#include <stdio.h>
#include "main.h"

/**
 * prime_factors - finds and prints the largest prime factor n
 * @n: the number to prints its prime factor
 *
 * Return: the largest prime factor of n
 */
long int prime_factors(long int n)
{
	long int i;

	i = 2;
	while (1)
	{
		if (n % i == 0 && i != n)
		{
			n = n / i;
		}
		else
		{
			i++;
		}

		if (n == i)
			break;
	}
	return (i);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%ld\n", prime_factors(612852475143));
	return (0);
}

