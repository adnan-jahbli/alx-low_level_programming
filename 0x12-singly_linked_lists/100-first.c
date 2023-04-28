#include <stdio.h>

/**
 * bmain - is a function that is excuted before the main function of a program
 *
 * Return:void.
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
