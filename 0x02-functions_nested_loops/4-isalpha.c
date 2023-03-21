#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: the char to check if it's alphabetic character.
 *
 * Return: 1 is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
