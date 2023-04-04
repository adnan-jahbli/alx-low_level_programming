#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @a: the given string to print
 * return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{	
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}

}
