#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n >= 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		if (n == 98)
			break;
		n--;
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			if (n == 98)
				break;
			n++;
		}
	}
	printf("\n");
}
