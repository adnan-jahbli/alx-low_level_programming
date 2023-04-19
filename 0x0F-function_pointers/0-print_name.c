#include "function_pointers.h"

/**
 * print_name - a funxtion that prints a name.
 * @name: a pointer to the string that will be printed
 * @f: a pointer to a the printing function
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
