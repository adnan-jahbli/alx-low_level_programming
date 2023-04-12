#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimentional grid
 * @grid: the given grid
 * @height: the height of the given grid
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = height; i >= 0; i--)
			free(*(grid + i));
		free(grid);
	}
}
