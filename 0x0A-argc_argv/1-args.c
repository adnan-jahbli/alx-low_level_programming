#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of passed arguments
 * @argv: the arguments passed to the program
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
