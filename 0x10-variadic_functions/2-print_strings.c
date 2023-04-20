#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings followed by a new line.
 * @separator: a string to be printed between strings
 * @n: number of passed strings.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *p;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p)
			printf("%s", p);
		else
			printf("nil");
		if (separator && i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
