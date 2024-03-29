#include "main.h"

/**
 * _isdigit - checks for digits.
 * @c: the int to check if it's a digit.
 *
 * Return: 1 is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
