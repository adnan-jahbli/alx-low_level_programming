#include <unistd.h>
#include <stdbool.h>
#include "main.h"

/**
 * jack_bauer -  every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	bool broke = false;
	int i, j, k, l;

	for (i = 0; i <= 2 && !broke; i++)
	{
		for (j = 0; j <= 9 && !broke; j++)
		{
			for (k = 0; k <= 5 && !broke; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i == 2 && j == 4 && k == 0 && l == 0)
					{
						broke = true;
						break;
					}
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
