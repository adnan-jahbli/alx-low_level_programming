#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k < 10 && j != 0)
				_putchar(' ');
			else if (k >= 10 && j != 0)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
