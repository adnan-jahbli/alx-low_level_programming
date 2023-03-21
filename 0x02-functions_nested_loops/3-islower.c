#include <unistd.h>
#include "main.h"

/**
 * _islower - check whether a char is lowercase
 * @c: the char to check if it's lowercase
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
