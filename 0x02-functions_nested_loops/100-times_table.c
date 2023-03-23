#include <unistd.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the integer used to print the n times table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 10 && j != 0)
					_putchar(' ');
				else if (k >= 10 && k <= 99 && j != 0)
					_putchar((k / 10) + '0');
				else if (k >= 100 && k <= 999 && j != 0)
				{
					_putchar(((k / 10) / 10) + '0');
					_putchar(((k / 10) % 10) + '0');
				}
				_putchar((k % 10) + '0');
				if (j == n)
					break;
				_putchar(',');
				_putchar(' ');
				if ((i * (j + 1)) >= 100 || k >= 100)
					continue;
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
