#include <unistd.h>
#include "main.h"

/**
 * main - Calling print_alphabet function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Priting the alphabets in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
