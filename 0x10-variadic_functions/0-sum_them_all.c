#include "variadic_functions.h"

/**
 * sum_them_all - a function that counts the sum of all its parameters.
 * @n: number of optional arguments
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (!n)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
