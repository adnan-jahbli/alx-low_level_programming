#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: the given adress of the string
 * @to: the string
 * return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
