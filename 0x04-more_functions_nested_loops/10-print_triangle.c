#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, count1, count2;

	count1 = size - 1;
	count2 = 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < count1; j++)
			_putchar(' ');
		for (k = 0; k < count2; k++)
			_putchar('#');
		count1--;
		count2++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
