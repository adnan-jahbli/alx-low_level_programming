#include <unistd.h>
#include "main.h"

/**
 * _isupper - check whether a char is uppercase
 * @c: the char to check if it's lowercase
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
