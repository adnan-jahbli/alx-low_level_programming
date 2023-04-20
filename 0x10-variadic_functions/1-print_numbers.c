#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: a string to be between numbers.
 * @n: number of integers passed to the function
 * Return:void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if ((i + 1) != n)
			printf("%s", separator);
		else
			printf("\n");
	}

	va_end(args);
}
