#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer to the array and NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = malloc(sizeof(int) * width);
		if (*(matrix + i) == NULL)
		{
			k = i - 1;
			while (k >= 0)
			{
				free(*(matrix + k));
				k--;
			}
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
