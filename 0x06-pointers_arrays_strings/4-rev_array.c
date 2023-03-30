#include "main.h"

/**
 * reverse_array - a function that reverses the content of
 * an array of integers.
 * @a: the array to reverse
 * @n: the number of elements of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int k, sat;

	for (k = 0; k < n / 2; k++)
	{
		sat = *(a + k);
		*(a + k) = *(a + (n - 1) - k);
		*(a + (n - 1) - k) = sat;
	}
}
