#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	char *p;
	unsigned int i = 0;
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			p = va_arg(args, char *);
			if (p == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", p);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
			|| format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
