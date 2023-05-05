#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 1 if big endian or 0 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *p;

	i = 1;
	p = (char *) &i;

	return ((int) *p);
}
