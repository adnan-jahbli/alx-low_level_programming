#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: the given array
 * @size: number of columns in the array a
 * return: void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum[] = {0, 0};

	i = 0;
	for (i = 0; i < size; i++)
	{
		sum[0] += *(a + (i * size) + i);
		sum[1] += *(a + ((i + 1) * size) - (i + 1));
	}
	printf("%d, %d\n", sum[0], sum[1]);
}
