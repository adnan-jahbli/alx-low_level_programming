#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that performs simple operations
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	ptr = get_op_func(operator);
	if (ptr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((ptr == op_div || ptr == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = ptr(num1, num2);
	printf("%d\n", calc);

	return (0);
}
