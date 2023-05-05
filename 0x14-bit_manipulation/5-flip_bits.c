#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count;
	unsigned long int num;

	num = n ^ m;
	count = 0;
	for (i = 0; i < 64; i++)
	{
		if (num & 1)
			count++;
		num = num >> 1;
	}
	return (count);
}
