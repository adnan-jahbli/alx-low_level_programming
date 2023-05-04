#include "main.h"

/**
 * get_bit - checks the value of a bit at a given index
 * @n: the given number
 * @index: the given index
 *
 * Return: 1 or 0 or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index >= 64)
		return (-1);

	i = (n >> index) & 1;

	if (i)
		return (1);
	else
		return (0);
}
