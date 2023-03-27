#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the first pointer variable that swaps its value with second parametre
 * @b: the second pointer variable that swaps its value with first parametre
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
